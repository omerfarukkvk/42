#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}