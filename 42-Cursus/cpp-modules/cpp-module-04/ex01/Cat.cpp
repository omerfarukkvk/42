#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor worked." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor worked." << std::endl;
	delete brain;
}

Cat::Cat(const Cat &oth)
{
	std::cout << "Cat copy constructor worked." << std::endl;
	this->brain = new Brain();
	*this = oth;
}

Cat &Cat::operator=(const Cat &oth)
{
	std::cout << "Animal assignment operator worked." << std::endl;
	*(this->brain) = *(oth.brain);
	this->type = oth.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow.." << std::endl;
}