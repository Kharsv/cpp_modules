#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(0) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(int value) : value(value * (1 << point)) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : value((int) roundf(value * (1 << point))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    value = rhs.value;
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

float Fixed::toFloat() const {
    return (float) value / (1 << point);
}

int Fixed::toInt() const {
    return value / (1 << point);
}

std::ostream &operator<<(std::ostream &s, const Fixed &fixed) {
    s << fixed.toFloat();
    return s;
}
