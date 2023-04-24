#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("omer");

	a.attack("faruk");
	a.takeDamage(50);
	a.beRepaired(50);
	a.takeDamage(100);
	a.guardGate();

	return 0;
}