#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        materias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (materias[i]) {
            delete materias[i];
        }
    }
}

MateriaSource::MateriaSource(MateriaSource const &oth) {
    for (int i = 0; i < 4; i++) {
        if (oth.materias[i]) {
            materias[i] = oth.materias[i]->clone();
        } else {
            materias[i] = nullptr;
        }
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const &oth) {
    if (this != &oth) {
        for (int i = 0; i < 4; i++) {
            if (materias[i]) {
                delete materias[i];
            }
            if (oth.materias[i]) {
                materias[i] = oth.materias[i]->clone();
            } 
            else {
                materias[i] = nullptr;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] == nullptr) {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] != nullptr && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return nullptr;
}
