#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Zombie");
	Zombie *zombie2 = new Zombie("Zombie2");
	zombie->announce();
	zombie2->announce();
	delete zombie;
	delete zombie2;
	randomChump("Random");
	return (0);
}