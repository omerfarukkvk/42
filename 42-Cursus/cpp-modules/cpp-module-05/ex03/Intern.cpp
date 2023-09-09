#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &oth)
{
    *this = oth;
}

Intern &Intern::operator=(const Intern &oth)
{
    (void)oth;
    return *this;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string forNames[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    AForm *form[3] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (name == forNames[i])
            return form[i];
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return 0;
}   
