#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* materias[4]; 
    public:
        MateriaSource(); 
        ~MateriaSource(); 
        MateriaSource(MateriaSource const &oth); 
        MateriaSource & operator=(MateriaSource const &oth); 
        virtual void learnMateria(AMateria* m); 
        virtual AMateria* createMateria(std::string const &type); 
};

#endif