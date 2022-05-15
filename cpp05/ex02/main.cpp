#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test1() {
    std::cout << "\n--- Testing Constructor attributes ---" << std::endl;
    try {
        ShrubberyCreationForm test("test");
        std::cout << test << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test2() {
    std::cout << "\n--- Testing Sign error ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 10);
        ShrubberyCreationForm shrubbery("test");
        std::cout << shrubbery << std::endl;
        bureaucrat.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test3() {
    std::cout << "\n--- Testing Grade error ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 145);
        ShrubberyCreationForm shrubbery("test");
        bureaucrat.signForm(shrubbery);
        std::cout << shrubbery << std::endl;
        bureaucrat.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test4() {
    std::cout << "\n--- Testing correct execution ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 137);
        ShrubberyCreationForm shrubbery("test");
        bureaucrat.signForm(shrubbery);
        std::cout << shrubbery << std::endl;
        bureaucrat.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test5() {
    std::cout << "\n--- Testing correct execution ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 1);
        ShrubberyCreationForm shrubbery("test1");
        RobotomyRequestForm robotomy("test2");
        PresidentialPardonForm presidential("test3");

        bureaucrat.signForm(shrubbery);
        bureaucrat.signForm(robotomy);
        bureaucrat.signForm(presidential);

        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << presidential << std::endl;

        std::cout << "---" << std::endl;
        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(robotomy);
        bureaucrat.executeForm(presidential);
        std::cout << "---" << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    // Errors
    test1();
    test2();
    test3();

    // Correct
    test4();
    test5();

    return 0;
}
