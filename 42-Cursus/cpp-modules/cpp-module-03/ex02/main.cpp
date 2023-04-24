#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("omer");

	a.attack("faruk");
	a.takeDamage(50);
	a.beRepaired(50);
	a.takeDamage(100);
	a.highFivesGuys();

	return 0;
}