
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", false, 145, 137), target("none") {
    std::cout << "Shrubbery constructor: " << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form("Shrubbery", false,
                                                                                       145, 137), target("none") {
    *this = form;
    std::cout << "Shrubbery constructor: " << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery", false,
                                                                               145, 137), target(target) {
    std::cout << "Shrubbery constructor: " << getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery destroy: " << getName() << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
    Form::operator=(rhs);
    target = rhs.target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::ofstream file((target + "_shrubbery").c_str());
    if (file.is_open()) {
file << ""
"                                                         . "
"                                              .         ;  "
"                 .              .              ;%     ;;   "
"                   ,           ,                :;%  %;   "
"                    :         ;                   :;%;'     .,"   
"           ,.        %;     %;            ;        %;'    ,;"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" 
"               ;%;      %;        ;%;        % ;%;  ,%;'"
"                `%;.     ;%;     %;'         `;%%;.%;'"
"                 `:;%.    ;%%. %@;        %; ;@%;%'   "
"                    `:%;.  :;bd%;          %;@%;'     "
"                      `@%:.  :;%.         ;@@%;'      "
"                        `@%.  `;@%.      ;@@%;        "
"                          `@%%. `@%%    ;@@%;         "
"                            ;@%. :@%%  %@@%;          "
"                              %@bd%%%bd%%:;           "
"                                #@%%%%%:;;            "
"                                %@@%%%::;             "
"                                %@@@%(o);  . '        " 
"                                %@@@o%;:(.,'          "
"                            `.. %@@@o%::;             "
"                               `)@@@o%::;             "
"                                %@@(o)::;             "
"                               .%@@@@%::;             "
"                               ;%@@@@%::;.            "
"                              ;%@@@@%%:;;;.           "
"                         ...;%@@@@@%%:;;;;,..         " << std::endl;
        file << "                                  # #### ####\n"
                "                                ###  #|### |/####\n"
                "                               ##  #/ ||/##/_/##/_#\n"
                "                             ###   ###|/    # ###\n"
                "                           ##_ _# _## | #/###_/_####\n"
                "                          ## #### #  #| /  #### ##/##\n"
                "                           __#_--###` |{,###---###-~\n"
                "                                      }{\n"
                "                                      }}{\n"
                "                                      }}{\n"
                "                                      }}{\n" << std::endl;

        file.close();
    }
}