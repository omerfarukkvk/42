#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("omer");

	a.attack("omer");
	a.takeDamage(7);
	a.beRepaired(7);
	a.takeDamage(10);

	return 0;
}