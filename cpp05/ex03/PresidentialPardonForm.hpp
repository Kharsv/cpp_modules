#ifndef MODULE_05_PRESIDENTIALPARDONFORM_HPP
#define MODULE_05_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm &form);

    explicit PresidentialPardonForm(const std::string &target);

    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

public:
    virtual void execute(const Bureaucrat &executor) const;

private:
    std::string target;

};


#endif //MODULE_05_PRESIDENTIALPARDONFORM_HPP
