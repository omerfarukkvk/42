#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor worked." << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor worked." << std::endl;
}

Dog::Dog(const Dog &oth)
{
	std::cout << "Dog copy constructor worked." << std::endl;
	*this = oth;
}

Dog &Dog::operator=(const Dog &oth)
{
	std::cout << "Animal assignment operator worked." << std::endl;
	this->type = oth.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}