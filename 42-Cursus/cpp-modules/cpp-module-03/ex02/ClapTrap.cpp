#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout <<  "Default ClapTrap created." << std::endl;
	this->name = "unnamed";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " ClapTrap created." << std::endl;
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oth)
{
	std::cout << "ClapTrap's Copy constructor worked." << std::endl;
	*this = oth;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &oth)
{
	std::cout << "Assignment operator worked." << std::endl;
	this->name = oth.name;
	this->hitPoint = oth.hitPoint;
	this->energyPoint = oth.energyPoint;
	this->attackDamage = oth.attackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hitPoint << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Clap Trap " << this->name <<  " repaired itself by " << amount << "  hit points!" << std::endl;
	this->hitPoint += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(amount != 0)
	    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if ((int)(hitPoint - amount) > 0)
        hitPoint -= amount;
    else{
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        return;
    }
}