#ifndef MODULE_04_CAT_HPP
#define MODULE_04_CAT_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
    Cat();

    Cat(const Cat &cat);

    virtual ~Cat();

    Cat &operator=(const Cat &rhs);

public:
    virtual void makeSound() const;

private:
    Brain* brain;

};


#endif //MODULE_04_CAT_HPP
