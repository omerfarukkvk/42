#ifndef IRC_HPP
# define IRC_HPP

# include <iostream>
# include <vector>
# include <sstream>
# include <sys/socket.h>
# include <netinet/in.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <poll.h>
# include "../includes/user.hpp"

class User;

class IRC
{
	private:
		int sockfd;
		const int port;
		const std::string password;
		std::string hostName;
		std::vector<User> users;
	public:
		IRC(char **av);
		void error(int value, std::string func);
		static void checkArgs(int ac, char **av);
		void run();
		std::string getHostName();
		void setHostName();
		void parseAndAdd(int fd, char *buffer);

};


#endif