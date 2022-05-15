#ifndef MODULE_05_FORM_HPP
#define MODULE_05_FORM_HPP


#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
    Form();

    Form(const Form &form);

    Form(const std::string &name, bool sign, const int signGrade, const int execGrade);

    virtual ~Form();

    Form &operator=(const Form &rhs);

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

public:
    const std::string &getName() const;

    bool isSign() const;

    int getSignGrade() const;

    int getExecGrade() const;

    void beSigned(const Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;

private:
    const std::string name;
    bool sign;
    const int sign_grade;
    const int exec_grade;

};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //MODULE_05_FORM_HPP
