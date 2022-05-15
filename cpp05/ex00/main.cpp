#include <iostream>
#include "Bureaucrat.hpp"

void test1() {
    std::cout << "\n--- Testing increment ---" << std::endl;
    try {
        Bureaucrat test("test", 2);
        std::cout << test.getGrade() << std::endl;
        test.incrementGrade();
        std::cout << test.getGrade() << std::endl;
        test.incrementGrade();
        std::cout << test.getGrade() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test2() {
    try {
        Bureaucrat test("test", 149);
        std::cout << test.getGrade() << std::endl;
        test.decrementGrade();
        std::cout << test.getGrade() << std::endl;
        test.decrementGrade();
        std::cout << test.getGrade() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test3() {  
    Bureaucrat test("Bob", 123);
    std::cout << test << std::endl;
}

int main() {

    std::cout << "\n- Test increment -" << std::endl;
    test1();
    std::cout << "\n- Test decrement -" << std::endl;
    test2();
    std::cout << "\n- Testing output -" << std::endl;
    test3();
    return 0;
}
