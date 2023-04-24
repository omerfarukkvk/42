#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor worked." << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor worked." << std::endl;
}

Cat::Cat(const Cat &oth)
{
	std::cout << "Cat copy constructor worked." << std::endl;
	*this = oth;
}

Cat &Cat::operator=(const Cat &oth)
{
	std::cout << "Animal assignment operator worked." << std::endl;
	this->type = oth.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow.." << std::endl;
}