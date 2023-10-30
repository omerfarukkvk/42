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

static AForm *makeRobotomy(const std::string target)
{
    return new RobotomyRequestForm(target);
}

static AForm *makePresidential(const std::string target)
{
    return new PresidentialPardonForm(target);
}

static AForm *makeShrubbery(const std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string forNames[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm *(*all_forms[])(const std::string target) = {&makeRobotomy, &makePresidential, &makeShrubbery};
    
    for (int i = 0; i < 3; i++)
    {
        if (name == forNames[i])
            return (all_forms[i](target));
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return 0;
}   
