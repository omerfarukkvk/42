#ifndef IRC_HPP
# define IRC_HPP

# include <iostream>

class IRC
{
	private:
		std::string password;
		int port;
	public:
		IRC(int argc, char **argv);
		void checkArgs(int argc, char **argv);
};


#endif