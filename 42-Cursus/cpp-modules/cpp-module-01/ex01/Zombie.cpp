#include "Zombie.hpp"

Zombie::Zombie(std::string	name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	std::cout << "zombie created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}