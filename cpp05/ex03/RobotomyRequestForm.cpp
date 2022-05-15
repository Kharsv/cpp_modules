#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", false, 72, 45), target("none") {
    std::cout << "Robotomy constructor: " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form("Robotomy", false,
                                                                                       72, 45), target("none") {
    *this = form;
    std::cout << "Robotomy constructor: " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy", false,
                                                                               72, 45), target(target) {
    std::cout << "Robotomy constructor: " << getName() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robotomy destroy: " << getName() << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    target = rhs.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "*** making drilling noises ***" << std::endl;
    std::srand(time(nullptr));
    int test = std::rand();
    if (test % 2 == 0) {
        std::cout << target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << target << " failure" << std::endl;
    }
}
