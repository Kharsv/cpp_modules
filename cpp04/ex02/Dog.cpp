#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain) {
    std::cout << "Dog_Constructor: " << type << " created with brain address: " << brain << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), brain(new Brain(*dog.brain)) {}

Dog::~Dog() {
    std::cout << "Dog_Destructor: " << type << " destroy" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs) {
        type = rhs.type;
        delete brain;
        brain = new Brain(*rhs.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
