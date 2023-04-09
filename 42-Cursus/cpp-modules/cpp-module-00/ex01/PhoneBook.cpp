#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::print_contacts_table()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;

	std::cout << " |------------ PHONEBOOK-CONTACT ------------|" << std::endl;
	std::cout << " |   Index  |First Name| LastName | Nickname |" << std::endl;
	std::cout << " |----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->empty(i))
		{
			first_name = this->contacts[i].get_fname();
			last_name = this->contacts[i].get_lname();
			nickname = this->contacts[i].get_nname();
			std::cout << " |" << std::setw(10) << i + 1 << "|";
			if (first_name.length() > 10)
				std::cout << first_name.substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << first_name << "|";
			if (last_name.length() > 10)
				std::cout << last_name.substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << last_name << "|";
			if (nickname.length() > 10)
				std::cout << nickname.substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << nickname << "| ";
			std::cout << std::endl;
		}
	}
	std::cout << " |----------|----------|----------|----------|" << std::endl;
}

void	PhoneBook::print_contact(int index)
{
	std::cout << "Full name: " << this->contacts[index].get_fname() << std::endl;
	std::cout << "Last name: " << this->contacts[index].get_lname() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].get_nname() << std::endl;
	std::cout << "Phone number: " << this->contacts[index].get_pnum() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].get_dsecret() << std::endl;
}

void	PhoneBook::search_contact()
{
	std::string	input;

	this->print_contacts_table();
	if (this->empty(0) == false)
		return ;
	std::cout << "Enter id of contact: ";
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "Id cannot be empty" << std::endl;
		return ;
	}
	if (isdigit(input[0]) == false)
	{
		std::cout << "Id must be a number" << std::endl;
		return ;
	}
	if (std::stoi (input) < 1 || std::stoi (input) > 8)
	{
		std::cout << "Id must be between 1 and 8" << std::endl;
		return ;
	}
	this->print_contact(std::stoi(input) - 1);
}

void	PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	if (first_name == "")
	{
		std::cout << "First name cannot be empty" << std::endl;
		return ;
	}
	this->contacts[this->index].set_fname(first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	if (last_name == "")
	{
		std::cout << "Last name cannot be empty" << std::endl;
		return ;
	}
	this->contacts[this->index].set_lname(last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	if (nickname == "")
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		return ;
	}
	this->contacts[this->index].set_nname(nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	if (phone_number == "")
	{
		std::cout << "Phone number cannot be empty" << std::endl;
		return ;
	}
	this->contacts[this->index].set_pnum(phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret == "")
	{
		std::cout << "Darkest secret cannot be empty" << std::endl;
		return ;
	}
	this->contacts[this->index].set_dsecret(darkest_secret);
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

bool	PhoneBook::empty(int index)
{
	if (this->contacts[index].get_fname() == "")
		return (false);
	return (true);
}