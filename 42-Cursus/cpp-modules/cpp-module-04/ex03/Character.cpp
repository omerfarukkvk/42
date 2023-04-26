#include "Character.hpp"

Character::Character(std::string const &name) :
    name(name)
{
    for (int i = 0; i < 4; i++) {
        inventory[i] = nullptr;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (inventory[i] != nullptr) {
            delete inventory[i];
        }
    }
}

Character::Character(Character const &oth)
{
    *this = oth;
}

Character& Character::operator=(const Character &oth)
{
    if (this == &oth) 
    {
        return *this;
    }

    name = oth.name;

    for (int i = 0; i < 4; i++) 
    {
        if (inventory[i] != nullptr) 
        {
            delete inventory[i];
            inventory[i] = nullptr;
        }
        if (oth.inventory[i] != nullptr) 
        {
            inventory[i] = oth.inventory[i]->clone();
        }
    }

    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if (m == nullptr) 
    {
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || inventory[idx] == nullptr) {
        return;
    }
    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || inventory[idx] == nullptr) {
    return;
    }
    inventory[idx]->use(target);
}