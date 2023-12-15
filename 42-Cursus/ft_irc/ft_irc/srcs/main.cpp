#include "../includes/irc.hpp"

int main(int ac, char *av[])
{
    IRC::checkArgs(ac, av);
    IRC irc(av);
    irc.run();
   
    return 0;
}
