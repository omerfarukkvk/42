#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor worked." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor worked." << std::endl;
	delete brain;
}

Dog::Dog(const Dog &oth)
{
	std::cout << "Dog copy constructor worked." << std::endl;
	this->brain = new Brain();
	*this = oth;
}

Dog &Dog::operator=(const Dog &oth)
{
	std::cout << "Animal assignment operator worked." << std::endl;
	*(this->brain) = *(oth.brain);
	this->type = oth.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}