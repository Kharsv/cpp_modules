#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog_Constructor: " << type << " created" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {}

Dog::~Dog() {
    std::cout << "Dog_Destructor: " << type << " destroy" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
