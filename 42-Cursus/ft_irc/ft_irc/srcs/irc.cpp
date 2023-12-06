#include "../includes/irc.hpp"

IRC::IRC(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: ./irc [host] [port]" << std::endl;
		exit(1);
	}
	checkArgs(argc, argv);
}

void IRC::checkArgs(int argc, char **argv)
{
	(void)argc;
	try
	{
		port = std::stoi(argv[1]);
		password = argv[2];
		if (port < 1024 || port > 65535)
			throw std::invalid_argument("Invalid port");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		exit(1);
	}
	//---------------------SIL---------------------
	std::cout << "Password: " << password << std::endl;
	std::cout << "Port: " << port << std::endl;
	//---------------------------------------------
}