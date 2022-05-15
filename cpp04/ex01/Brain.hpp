#ifndef MODULE_04_BRAIN_HPP
#define MODULE_04_BRAIN_HPP


#include <string>

class Brain {

public:
    Brain();

    Brain(const Brain &brain);

    virtual ~Brain();

    Brain &operator=(const Brain &rhs);

private:
    std::string ideas[100];

};


#endif //MODULE_04_BRAIN_HPP
