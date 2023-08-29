#include "AForm.hpp"

AForm::AForm() : name("Default"), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
	this->isSigned = false;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->isSigned = false;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm::AForm(const AForm &oth) : name(oth.name), gradeToSign(oth.gradeToSign), gradeToExecute(oth.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = oth;
}

AForm &AForm::operator=(const AForm &oth)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &oth)
		this->isSigned = oth.isSigned;
	return *this;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string AForm::getName() const
{
	return this->name;
}

bool AForm::getIsSigned() const
{
	return this->isSigned;
}

int AForm::getGradeToSign() const
{
	return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "Form " << form.getName() << " is ";
	if (!form.getIsSigned())
		out << "not ";
	out << "signed, grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << std::endl;
	return out;
}
