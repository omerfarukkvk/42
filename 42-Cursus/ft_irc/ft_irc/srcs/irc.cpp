#include "../includes/irc.hpp"

IRC::IRC(char **av) : port(std::stoi(av[1])), password(av[2])
{
	this->sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	error(this->sockfd, "socket");
	error(setsockopt(this->sockfd, SOL_SOCKET, SO_REUSEADDR, &this->port, sizeof(this->port)), "setsockopt");
	sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(this->port);
	addr.sin_addr.s_addr = INADDR_ANY;
	error(bind(this->sockfd, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)), "bind");
	//error(fcntl(this->sockfd, F_SETFL, O_NONBLOCK), "fcntl");
	std::cout << "Server is running on port " << this->port << std::endl;
}

void IRC::checkArgs(int ac,char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./irc [host] [port]" << std::endl;
		exit(1);
	}
	try
	{
		int port = std::stoi(av[1]);
		if (port < 1024 || port > 65535)
		{
			std::cout << "Port must be between 1024 and 65535" << std::endl;
			exit(1);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Port must be a number" << std::endl;
		exit(1);
	}
}

void IRC::error(int value, std::string func)
{
	if (value == -1)
	{
		std::cout << "Error in " << func << std::endl;
		exit(1);
	}
}

void IRC::setHostName()
{
	char buffer[1024];
	error(gethostname(buffer, 1024), "gethostname");
	this->hostName = buffer;
}

std::string IRC::getHostName()
{
	return this->hostName;
}

void IRC::run()
{
	setHostName();
	error(listen(this->sockfd, 10), "listen");
	std::vector<pollfd> pollFd(1);
	pollFd[0].fd = this->sockfd;
	pollFd[0].events = POLLIN;
	while(true)
	{
		int errPoll = poll(&pollFd[0], pollFd.size(), POLLERR);
		error(errPoll, "poll");
		if(errPoll == 0)
			continue;
		else
		{
			if (pollFd[0].revents & POLLIN)
			{
				sockaddr_in client;
				int clientFd = accept(this->sockfd, reinterpret_cast<sockaddr*>(&client), reinterpret_cast<socklen_t*>(&client));
				error(clientFd, "accept");
				error(fcntl(clientFd, F_SETFL, O_NONBLOCK), "fcntl");
				pollfd temp;
				temp.fd = clientFd;
				temp.events = POLLIN;
				pollFd.push_back(temp);
				this->users.push_back(User(clientFd));
				std::cout << "new connection" << std::endl;
			}
			for(size_t i = 1; i < pollFd.size(); i++)
			{
				if (pollFd[i].revents & POLLIN)
				{
					char buffer[1024];
					memset(buffer, 0, 1024);
					if (pollFd[i].revents == POLLIN)
					{
						error(recv(pollFd[i].fd, buffer, 1024, MSG_EOF), "recv");
					}
					parseAndAdd(pollFd[i].fd, buffer);
				}
			}
		}
		// char buffer[1024];
		// sockaddr_in client;
		// int newFd = accept(this->sockfd, reinterpret_cast<sockaddr*>(&client), reinterpret_cast<socklen_t*>(&client));
		// error(newFd, "accept");
		// error(recv(newFd, buffer, 1024, MSG_EOF), "recv");
		// std::string msg = ":localhost 001 test :Welcome to the Internet Relay Network!test!test@" + hostName + "\r\n";
		// error(send(newFd, msg.c_str(), 4097, 0), "send");
	}
}

void	IRC::parseAndAdd(int fd, char *buffer)
{
	unsigned long i;
	std::string buff(buffer);
	for (i = 0; i < this->users.size(); i++)
		if (this->users[i].getFd() == fd)
			break ;
	std::istringstream ss(buff);
	std::vector<std::string> words;
	std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
	std::vector<std::string>::iterator s = words.begin();
	std::vector<std::string>::iterator e = words.end();
	int sign = 0;
	while (s != e)
	{
		if (*s == "NICK" && (s + 1) != e)
		{
			std::cout << "Nicki buldum : ." << *(s + 1) << "." << std::endl;
			s++;
			std::string nick(*s);
			this->users[i].setNickName(nick);
			sign++;
		}
		else if (*s == "USER" && (s + 1) != e)
		{
			std::cout << "Useri buldum : ." << *(s + 1) << "." << std::endl;
			s++;
			std::string user(*s);
			this->users[i].setUserName(user);
			sign++;
		}
		std::cout << "\n";
		std::cout << *s << std::endl;
		// else
		// 	std::cout << buffer << std::endl;
		s++;
	}
	if (sign == 2)
	{
		// macroyla olusturulacak
		//std::string messg = ": 001 : " + this->users[i].getUserName() + " Welcome to the Internet Relay Network " + this->users[i].getNickName() + "!" + this->users[i].getUserName() + "@" + this->getHostName() + "\r\n"; 
		std::string messg = ": 001 : Welcome to the Internet Relay Network!test!test@" + hostName + "\r\n";
		error(send(fd, messg.c_str(), 4097, 0), "send");
	}
}