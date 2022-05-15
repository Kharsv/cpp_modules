#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &brain) {
    *this = brain;
}

Brain::~Brain() {
    std::cout << "Brain destroy" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    }
    return *this;
}
