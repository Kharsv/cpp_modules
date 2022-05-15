#include <iostream>
#include "Bureaucrat.hpp"

void test1() {
    std::cout << "\n--- stack error ---" << std::endl;
    try {
        Form test("test", false, 0, 1);
        std::cout << test << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test2() {
    std::cout << "\n--- stack error ---" << std::endl;
    try {
        Form test("test", false, 151, 1);
        std::cout << test << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test3() {
    std::cout << "\n--- Sign error ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 10);
        Form form("form", false, 1, 1);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test4() {
    std::cout << "\n--- Sign correct ---" << std::endl;
    try {
        Bureaucrat bureaucrat("bureaucrat", 1);
        Form form("form", false, 1, 1);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    // Constructors errors
    test1();
    test2();

    // Functions testing
    test3();
    test4();
    return 0;
}
