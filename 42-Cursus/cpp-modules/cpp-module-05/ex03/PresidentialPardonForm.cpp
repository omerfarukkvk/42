#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
} 

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oth) : AForm(oth)
{
    *this = oth;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &oth)
{
    AForm::operator=(oth);
    return *this;
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->isSigned == true)
        throw AForm::AlreadySignedException();
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->isSigned = true;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
    if (executor.getGrade() > this->gradeToExecute)
        throw AForm::GradeTooLowException();
    else if(this->getIsSigned() == false)
        throw AForm::CannotSignedException();
    else
        std::cout << this->target << " has been pardoned by Zaphold Beeblebrox" << std::endl;
}
