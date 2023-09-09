#ifndef SCRUBBERYCREATIONFORM_HPP
# define SCRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &oth);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &oth);
		void execute(Bureaucrat const &executor);
        void beSigned(Bureaucrat const &bureaucrat);
};

#endif
