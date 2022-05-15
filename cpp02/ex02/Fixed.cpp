#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::point = 8;

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed &fixed) : value(0) {
    *this = fixed;
}

Fixed::Fixed(int value) : value(value * (1 << point)) {
}

Fixed::Fixed(float value) : value((int) roundf(value * (1 << point))) {}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &rhs) {
    value = rhs.value;
    return *this;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++() {
    value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old = *this;
    operator++();
    return old;
}

Fixed &Fixed::operator--() {
    value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed old = *this;
    operator--();
    return old;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return value < rhs.value;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return !(*this < rhs);
}

bool Fixed::operator==(const Fixed &rhs) const {
    return value == rhs.value;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return !(rhs == *this);
}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(int raw) {
    value = raw;
}

float Fixed::toFloat() const {
    return (float) value / (1 << point);
}

int Fixed::toInt() const {
    return value / (1 << point);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
    if (lhs.value < rhs.value)
        return lhs;
    else
        return rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs) {
    if (lhs.value < rhs.value)
        return lhs;
    else
        return rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
    if (lhs.value > rhs.value)
        return lhs;
    else
        return rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs) {
    if (lhs.value > rhs.value)
        return lhs;
    else
        return rhs;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
}
