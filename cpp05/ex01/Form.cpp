#include <iostream>
#include <iomanip>
#include "Form.hpp"
#include "../ex02/Form.hpp"


Form::Form() : name("NoNameForm"), sign(false), sign_grade(1), exec_grade(1) {
    std::cout << "Form constructor: " << name << std::endl;
}

Form::Form(const Form &form) : name("NoNameForm"), sign(false), sign_grade(1), exec_grade(1) {
    *this = form;
    std::cout << "Form constructor: " << name << std::endl;
}

Form::Form(const std::string &name, bool sign, const int signGrade, const int execGrade) : name(name), sign(sign),
                                                                                           sign_grade(signGrade),
                                                                                           exec_grade(execGrade) {
    std::cout << "Form constructor: " << name << std::endl;
    if (signGrade < 1 || execGrade < 1) {
        throw GradeTooHighException();
    } else if (signGrade > 150 || execGrade > 150) {
        throw GradeTooLowException();
    }
}

Form::~Form() {
    std::cout << "Form destroy: " << name << std::endl;
}

Form &Form::operator=(const Form &rhs) {
    if (this != &rhs) {
        *(std::string *) &name = rhs.name;
        sign = rhs.sign;
        *(int *) &sign_grade = rhs.sign_grade;
        *(int *) &exec_grade = rhs.exec_grade;
    }
    return *this;
}

const std::string &Form::getName() const {
    return name;
}

bool Form::isSign() const {
    return sign;
}

int Form::getSignGrade() const {
    return sign_grade;
}

int Form::getExecGrade() const {
    return exec_grade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (sign) {
        std::cout << "Form already signed" << std::endl;
    } else if (bureaucrat.getGrade() <= sign_grade) {
        sign = true;
    } else {
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << form.getName() << ", form status " << std::boolalpha << form.isSign() << "; sign_grade "
       << form.getSignGrade() << "; exec_grade " << form.getExecGrade();
    return os;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Forms error: grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Forms error: grade is too low");
}
