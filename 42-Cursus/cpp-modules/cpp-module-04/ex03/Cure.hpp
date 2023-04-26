#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const &oth);
        Cure & operator=(Cure const &oth);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif