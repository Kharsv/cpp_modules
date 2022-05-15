#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern newIntern;
    Form *f1;
    Form *f2;
    Form *f3;
    Form *errorForm;

    std::cout << "\n--- Start creating ---" << std::endl;
    f1 = newIntern.makeForm("shrubbery creation", "MyFile");
    f2 = newIntern.makeForm("robotomy request", "Bender");
    f3 = newIntern.makeForm("presidential pardon", "Bob");
    errorForm = newIntern.makeForm("valid form", "validation");

    std::cout << "\n--- Printing results ---" << std::endl;
    std::cout << f1 << " = " << *f1 << std::endl;
    std::cout << f2 << " = " << *f2 << std::endl;
    std::cout << f3 << " = "<< *f3 << std::endl;
    std::cout << errorForm << std::endl;

    std::cout << "\n--- Deleting ---" << std::endl;
    delete f1;
    delete f2;
    delete f3;
    delete errorForm;

    return 0;
}
