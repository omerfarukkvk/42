#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}

MateriaSource::MateriaSource(MateriaSource const &oth)
{
	*this = oth;
}


MateriaSource &MateriaSource::operator=(MateriaSource const &oth)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = oth.materia[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->occupied < 4)
	{
		this->materia[this->occupied] = m;
		this->occupied++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	std::cout << "Materia not found" << std::endl;
	return NULL;
}