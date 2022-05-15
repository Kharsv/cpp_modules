#include <iostream>
#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(0) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}
