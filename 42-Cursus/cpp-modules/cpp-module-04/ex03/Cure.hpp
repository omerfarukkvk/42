#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure :public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &oth);
		Cure &operator=(const Cure &oth);
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif