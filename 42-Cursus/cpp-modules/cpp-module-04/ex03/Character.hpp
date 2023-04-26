#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name; 
        AMateria* inventory[4]; 
    public:
        Character(std::string const & name);
        ~Character();
        Character(Character const &oth);
        Character & operator=(Character const &oth);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};


#endif