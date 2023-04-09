#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(5, "zombiee");
    delete [] zombies;
    return(0);
}