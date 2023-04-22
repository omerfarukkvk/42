#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FrapTrap created." << std::endl;
	this->name = "unnamed";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << name << " FrapTrap created." << std::endl;
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &oth)
{
	std::cout << "FragTrap's Copy constructor worked." << std::endl;
	*this = oth;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " send a request give him high five!" << std::endl;
}