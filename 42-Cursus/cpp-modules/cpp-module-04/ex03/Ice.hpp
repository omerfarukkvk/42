#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const &oth);
        Ice & operator=(Ice const &oth);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif