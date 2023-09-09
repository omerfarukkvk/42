#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm &oth);
		AForm &operator=(const AForm &oth);
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
        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(Bureaucrat const &executor) = 0;
		virtual void beSigned(Bureaucrat const &bureaucrat) = 0;
};

#endif
