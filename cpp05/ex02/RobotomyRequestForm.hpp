#ifndef MODULE_05_ROBOTOMYREQUESTFORM_HPP
#define MODULE_05_ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm &form);

    explicit RobotomyRequestForm(const std::string &target);

    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

public:
    virtual void execute(const Bureaucrat &executor) const;

private:
    std::string target;

};


#endif //MODULE_05_ROBOTOMYREQUESTFORM_HPP
