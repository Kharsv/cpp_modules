#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat_Constructor: " << type << " created" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {}

Cat::~Cat() {
    std::cout << "Cat_Destructor: " << type << " destroy" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
