#include "../includes/irc.hpp"

IRC::IRC(char **av) : port(std::stoi(av[1])), password(av[2])
{
	this->sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	error(this->sockfd, "socket");
	sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(this->port);
	addr.sin_addr.s_addr = INADDR_ANY;
	error(bind(this->sockfd, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)), "bind");
	error(listen(this->sockfd, 10), "listen");
	error(setsockopt(this->sockfd, SOL_SOCKET, SO_REUSEADDR, &this->port, sizeof(this->port)), "setsockopt");
	error(fcntl(this->sockfd, F_SETFL, O_NONBLOCK), "fcntl");
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

void IRC::run()
{
	while(true)
	{
		
	}
}