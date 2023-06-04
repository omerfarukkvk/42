#include "Form.hpp"

Form::Form() : name("Default"), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
	this->isSigned = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &oth) : name(oth.name), gradeToSign(oth.gradeToSign), gradeToExecute(oth.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = oth;
}

Form &Form::operator=(const Form &oth)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &oth)
		this->isSigned = oth.isSigned;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getGradeToSign() const
{
	return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form " << form.getName() << " is ";
	if (!form.getIsSigned())
		out << "not ";
	out << "signed, grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute() << std::endl;
	return out;
}
