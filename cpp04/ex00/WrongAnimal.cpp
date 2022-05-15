#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal") {
    std::cout << "Animal_Constructor: " << type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
    *this = animal;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
    std::cout << "WrongAnimal_Constructor: " << type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal_Destructor: " << type << " destroy" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

const std::string &WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Making animal sound.. (but what is the sound of animals?)" << std::endl;
}
