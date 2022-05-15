#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName"), grade(1) {
    std::cout << "Bureaucrat constructor: " << name << "=" << grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name("NoName"), grade(1) {
    *this = bureaucrat;
    std::cout << "Bureaucrat constructor: " << name << "=" << grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    std::cout << "Bureaucrat constructor: " << name << "=" << grade << std::endl;
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destroy: " << name << "=" << grade << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    if (this != &rhs) {
        *(std::string *) &name = rhs.name;
        grade = rhs.grade;
    }
    return *this;
}

const std::string &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form &form) const {
    try {
        form.beSigned(*this);
    } catch(Form::GradeTooLowException &e) {
        std::cout << name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
        return;
    }
    std::cout << name << " signs " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(const Form &form) const {
    try {
        form.execute(*this);
    } catch(std::exception &e) {
        std::cout << name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
        return;
    }
    std::cout << name << " executes " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade can't be higher, than 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade can't be lower, than 150");
}
