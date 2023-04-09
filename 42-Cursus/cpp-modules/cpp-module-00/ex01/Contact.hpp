#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		std::string get_fname();
		std::string get_lname();
		std::string get_nname();
		std::string get_pnum();
		std::string get_dsecret();
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nname(std::string str);
		void		set_pnum(std::string str);
		void		set_dsecret(std::string str);

};


#endif