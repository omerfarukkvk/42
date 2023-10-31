#include "AForm.hpp"

AForm::AForm() : name("Default"), gradeToSign(150), gradeToExecute(150)
{
	this->isSigned = false;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->isSigned = false;
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &oth) : name(oth.name), gradeToSign(oth.gradeToSign), gradeToExecute(oth.gradeToExecute)
{
	*this = oth;
}

AForm &AForm::operator=(const AForm &oth)
{
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

const char* AForm::AlreadySignedException::what() const throw()
{
    return "Form is already signed";
}

const char* AForm::CannotSignedException::what() const throw()
{
    return "Form is cannot signed";
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
