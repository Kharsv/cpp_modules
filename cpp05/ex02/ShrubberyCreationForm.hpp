#ifndef MODULE_05_SHRUBBERYCREATIONFORM_HPP
#define MODULE_05_SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(const ShrubberyCreationForm &form);

    explicit ShrubberyCreationForm(const std::string &target);

    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

public:
    virtual void execute(const Bureaucrat &executor) const;

private:
    std::string target;

};


#endif //MODULE_05_SHRUBBERYCREATIONFORM_HPP
