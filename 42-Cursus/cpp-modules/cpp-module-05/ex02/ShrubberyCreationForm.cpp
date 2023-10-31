#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
    *this = src;
}


ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    if (this != &rhs) {
        this->target = rhs.target;
    }
    return *this;
}

void ShrubberyCreationForm::beSigned(Bureaucrat const &bureaucrat)
{
     if (this->isSigned == true)
        throw AForm::AlreadySignedException();
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->isSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() > this->gradeToExecute)
		throw AForm::GradeTooLowException();
    else if(this->getIsSigned() == false)
        throw AForm::CannotSignedException();
    else
    {
        std::ofstream file(this->target + "_shrubbery", std::ios::trunc);

        file << "                                                         ." << std::endl;
        file << "                                              .         ;  " << std::endl;
        file << "                 .              .              ;%     ;;   " << std::endl;
        file << "                   ,           ,                :;%  %;   " << std::endl;
        file << "                    :         ;                   :;%;'     .,   " << std::endl;
        file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
        file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
        file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
        file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
        file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
        file << "                            ;@%. :@%%  %@@%;       " << std::endl;
        file << "                              %@bd%%%bd%%:;     " << std::endl;
        file << "                                #@%%%%%:;;" << std::endl;
        file << "                                %@@%%%::;" << std::endl;
        file << "                                %@@@%(o);  . '         " << std::endl;
        file << "                                %@@@o%;:(.,'         " << std::endl;
        file << "                            `.. %@@@o%::;         " << std::endl;
        file << "                               `)@@@o%::;         " << std::endl;
        file << "                                %@@(o)::;        " << std::endl;
        file << "                               .%@@@@%::;         " << std::endl;
        file << "                               ;%@@@@%::;.          " << std::endl;
        file << "                              ;%@@@@%%:;;;. " << std::endl;
        file << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;

        file.close();
        std::cout << this->target << "_shrubbery file created" << std::endl;
    }
}
