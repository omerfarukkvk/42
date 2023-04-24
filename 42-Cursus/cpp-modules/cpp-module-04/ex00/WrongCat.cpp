#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor worked." << std::endl;
	this->type = "wrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor worked." << std::endl;
}

WrongCat::WrongCat(const WrongCat &oth)
{
	std::cout << "WrongCat copy constructor worked." << std::endl;
	*this = oth;
}

WrongCat &WrongCat::operator=(const WrongCat &oth)
{
	std::cout << "WrongCat assignment operator worked." << std::endl;
	this->type = oth.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "BARK! BARK!" << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type;
}
