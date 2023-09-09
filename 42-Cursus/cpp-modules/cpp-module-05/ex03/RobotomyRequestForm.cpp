#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
   this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oth)
{
    *this = oth;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &oth)
{
    AForm::operator=(oth);
    return *this;
}

void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->isSigned == true)
        throw AForm::AlreadySignedException();
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->isSigned = true;    
}

void RobotomyRequestForm::execute(const Bureaucrat &executor)
{
    if (executor.getGrade() > this->gradeToExecute)
        throw AForm::GradeTooLowException();
    else
    {
        srand(time(NULL));
        std::cout << "Some drilling noises" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout <<  "Robotomization failed!" << std::endl;
    }
}
