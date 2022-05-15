#ifndef MODULE_05_INTERN_HPP
#define MODULE_05_INTERN_HPP


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
    Intern();

    Intern(const Intern &intern);

    virtual ~Intern();

    Intern &operator=(const Intern &rhs);

public:
    Form *makeForm(const std::string &name, const std::string &target);

private:
    Form *makeShrubbery(const std::string &target);

    Form *makeRobotomy(const std::string &target);

    Form *makePresidential(const std::string &target);

    Form *formNotFound(const std::string &target);

    void initDictionary();

private:
    std::pair<std::string, Form *(Intern::*)(const std::string &target)> dictionary[4];

};


#endif //MODULE_05_INTERN_HPP
