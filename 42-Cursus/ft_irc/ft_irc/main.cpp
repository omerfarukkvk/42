#include "irc.hpp"

int main(int ac, char *av[])
{
    if (ac != 3)
        cerr << "Arguments should like -> './ircserv <port> <password>'" << endl;
    try
    {
        checkPortArg(av[1]);
        checkPassArg(av[2]);
    }
    catch(const exception &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
