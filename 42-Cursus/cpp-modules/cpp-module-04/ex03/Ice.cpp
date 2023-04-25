#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &oth) : AMateria(oth)
{
}

Ice &Ice::operator=(const Ice &oth)
{
	if (this != &oth)
		AMateria::operator=(oth);
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}