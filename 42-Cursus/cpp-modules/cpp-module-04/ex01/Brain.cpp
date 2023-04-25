#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor worked" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor worked" << std::endl;
}

Brain::Brain(const Brain &oth)
{
	std::cout << "Brain copy constructor worked" << std::endl;
	*this = oth;
}

Brain &Brain::operator=(const Brain &oth)
{
	std::cout << "Brain assignment operator worked" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = oth.ideas[i];
	return *this;
}