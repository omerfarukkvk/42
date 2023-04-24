#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("omer");

	a.attack("faruk");
	a.takeDamage(7);
	a.beRepaired(7);
	a.takeDamage(10);

	return 0;
}