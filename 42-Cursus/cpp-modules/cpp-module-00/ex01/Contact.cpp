#include "Contact.hpp"

// Constructors
Contact::Contact()
{
}

Contact::~Contact()
{
}

// Get Functions
std::string		Contact::get_fname()
{
	return (this->first_name);
}

std::string		Contact::get_lname()
{
	return (this->last_name);
}

std::string		Contact::get_nname()
{
	return (this->nickname);
}

std::string		Contact::get_pnum()
{
	return (this->phone_number);
}

std::string		Contact::get_dsecret()
{
	return (this->darkest_secret);
}

// Set Functions
void	Contact::set_fname(std::string str)
{
	this->first_name = str;
}

void	Contact::set_lname(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_pnum(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_dsecret(std::string str)
{
	this->darkest_secret = str;
}