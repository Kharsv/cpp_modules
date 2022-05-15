#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat") {
    std::cout << "WrongCat_Constructor: " << type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {}

WrongCat::~WrongCat() {
    std::cout << "WrongCat_Destructor: " << type << " destroy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this != &rhs) {
        type = rhs.type;
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
