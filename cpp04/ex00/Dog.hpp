#ifndef MODULE_04_DOG_HPP
#define MODULE_04_DOG_HPP


#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();

    Dog(const Dog &dog);

    virtual ~Dog();

    Dog &operator=(const Dog &rhs);

public:
    virtual void makeSound() const;

};


#endif //MODULE_04_DOG_HPP
