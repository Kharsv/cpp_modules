#ifndef MODULE_04_ANIMAL_HPP
#define MODULE_04_ANIMAL_HPP


#include <string>

class Animal {

public:
    Animal();

    Animal(const Animal &animal);

    explicit Animal(const std::string &type);

    virtual ~Animal();

    Animal &operator=(const Animal &rhs);

public:
    const std::string &getType() const;

    virtual void makeSound() const;

protected:
    std::string type;

};


#endif //MODULE_04_ANIMAL_HPP
