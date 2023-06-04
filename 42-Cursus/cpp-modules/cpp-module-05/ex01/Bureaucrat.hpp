#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &oth);
		Bureaucrat &operator=(const Bureaucrat &oth);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(class Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif