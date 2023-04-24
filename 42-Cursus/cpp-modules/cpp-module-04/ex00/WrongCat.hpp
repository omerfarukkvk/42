#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &oth);
		WrongCat &operator=(const WrongCat &oth);
		void	makeSound() const;
		std::string	getType() const;
};

#endif