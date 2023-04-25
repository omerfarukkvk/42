#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &oth);
		WrongAnimal &operator=(const WrongAnimal &oth);
		void makeSound() const;
		std::string getType() const;
};

#endif