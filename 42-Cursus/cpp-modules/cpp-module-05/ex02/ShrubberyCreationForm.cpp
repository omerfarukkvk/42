#include "ScrubberyCreationForm.hpp"

ScruberryCreationForm::ScruberryCreationForm() : Form("ScrubberyCreationForm", 145, 137), target("default") {
}

ScrubberyCreationForm::ScrubberyCreationForm(std::string target) : Form("ScrubberyCreationForm", 145, 137), target(target) {
}

ScrubberyCreationForm::~ScrubberyCreationForm() {
}

ScrubberyCreationForm::ScrubberyCreationForm(ScrubberyCreationForm const & src) : Form(src) {
    *this = src;
}


ScrubberyCreationForm & ScrubberyCreationForm::operator=(ScrubberyCreationForm const & rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
    }
    return *this;
}

void ScruberryCreationForm::execute(Bureaucrat const &executor) conts
{
    std::fstream file;

    file.open(this->target + "_shrubbery", std::fstream::out | std::fstream::trunc);
    if (!file.is_open())
        std::err << "Error: could not open file" << std::endl;
    
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
}