#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor worked." << std::endl;
	this->type = "none";
}

Animal::~Animal()
{
	std::cout << "Animal destructor worked." << std::endl;
}

Animal::Animal(const Animal &oth)
{
	std::cout << "Animal copy constructor worked." << std::endl;
	*this = oth;
}

Animal	&Animal::operator=(const Animal &oth)
{
	std::cout << "Animal assignment operator worked." << std::endl;
	this->type = oth.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Undefined animal sound." << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}