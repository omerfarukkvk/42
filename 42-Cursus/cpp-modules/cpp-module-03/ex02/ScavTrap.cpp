#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap created." << std::endl;
	this->name = "unnamed";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << name << " ScavTrap created." << std::endl;
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &oth)
{
	std::cout << "ScavTrap's Copy constructor worked." << std::endl;
	*this = oth;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " have entered in Gate keeper mode." << std::endl;
}
