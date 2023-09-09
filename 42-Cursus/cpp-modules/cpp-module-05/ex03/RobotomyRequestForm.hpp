#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &oth);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &oth);
        void execute(Bureaucrat const &executor);
        void beSigned(Bureaucrat const &bureaucrat);
};

#endif
