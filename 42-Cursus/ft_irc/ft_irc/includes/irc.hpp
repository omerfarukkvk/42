#ifndef IRC_HPP
# define IRC_HPP

# include <iostream>
# include <sys/socket.h>
# include <netinet/in.h>

class IRC
{
	private:
		const int port;
		const std::string password;
		int sockfd;
	public:
		IRC(char **av);
		void error(int value, std::string func);
		static void checkArgs(int ac, char **av);

};


#endif