#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", false, 25, 5), target("none") {
    std::cout << "Presidential constructor: " << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form("Presidential", false,
                                                                                       25, 5), target("none") {
    *this = form;
    std::cout << "Presidential constructor: " << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential", false,
                                                                               25, 5), target(target) {
    std::cout << "Presidential constructor: " << getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential destroy: " << getName() << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    Form::operator=(rhs);
    target = rhs.target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
