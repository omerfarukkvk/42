#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
		int occupied;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &oth);
		MateriaSource &operator=(MateriaSource const &oth);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif