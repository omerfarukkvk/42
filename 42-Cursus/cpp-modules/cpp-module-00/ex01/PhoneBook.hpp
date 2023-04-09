#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search_contact();
		void	print_contacts_table();
		void	print_contact(int index);
		bool	empty(int index);
};

#endif