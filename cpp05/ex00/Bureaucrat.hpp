#ifndef MODULE_05_BUREAUCRAT_HPP
#define MODULE_05_BUREAUCRAT_HPP


#include <string>
#include <ostream>

class Bureaucrat {

public:
    Bureaucrat();

    Bureaucrat(const Bureaucrat &bureaucrat);

    Bureaucrat(const std::string &name, int grade);

    virtual ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &rhs);

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

public:
    const std::string &getName() const;

    int getGrade() const;

    void incrementGrade();

    void decrementGrade();

private:
    const std::string name;
    int grade;

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif //MODULE_05_BUREAUCRAT_HPP
