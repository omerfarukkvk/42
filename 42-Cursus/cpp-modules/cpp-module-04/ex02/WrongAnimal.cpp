#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructer worked" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal desturctor worked" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oth)
{
	std::cout << "WrongAnimal copy constructer worked" << std::endl;
	*this = oth;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oth)
{
	std::cout << "WrongAnimal assignment operator worked" << std::endl;
	this->type = oth.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}