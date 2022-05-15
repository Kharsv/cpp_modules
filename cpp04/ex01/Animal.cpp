#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal_Constructor: " << type << " created" << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
}

Animal::Animal(const std::string &type) : type(type) {
    std::cout << "Animal_Constructor: " << type << " created" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal_Destructor: " << type << " destroy" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

const std::string &Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Making animal sound.. (WHAT?)" << std::endl;
}
