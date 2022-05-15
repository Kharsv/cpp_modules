#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain) {
    std::cout << "Cat_Constructor: " << type << " created with brain address: " << brain << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), brain(new Brain(*cat.brain)) {}

Cat::~Cat() {
    std::cout << "Cat_Destructor: " << type << " destroy" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        type = rhs.type;
        delete brain;
        brain = new Brain(*rhs.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
