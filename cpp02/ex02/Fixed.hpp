#ifndef MODULE_02_FIXED_HPP
#define MODULE_02_FIXED_HPP


class Fixed {

public:
    // Default constructor
    Fixed();

    // Copy constructor
    Fixed(const Fixed &fixed);

    explicit Fixed(int value);

    explicit Fixed(float value);

    virtual ~Fixed();

public:
    // Copy assignation operator
    Fixed &operator=(const Fixed &rhs);

    // Arithmetic operators
    Fixed operator+(const Fixed &rhs) const;

    Fixed operator-(const Fixed &rhs) const;

    Fixed operator*(const Fixed &rhs) const;

    Fixed operator/(const Fixed &rhs) const;

    // Prefix increment
    Fixed &operator++();

    // Postfix increment
    Fixed operator++(int);

    // Prefix decrement
    Fixed &operator--();

    // Postfix decrement
    Fixed operator--(int);

    // Relational operators
    bool operator<(const Fixed &rhs) const;

    bool operator>(const Fixed &rhs) const;

    bool operator<=(const Fixed &rhs) const;

    bool operator>=(const Fixed &rhs) const;

    bool operator==(const Fixed &rhs) const;

    bool operator!=(const Fixed &rhs) const;

public:
    // Functions
    int getRawBits() const;

    void setRawBits(int raw);

    float toFloat() const;

    int toInt() const;

    static Fixed &min(Fixed &lhs, Fixed &rhs);

    static const Fixed &min(const Fixed &lhs, const Fixed &rhs);

    static Fixed &max(Fixed &lhs, Fixed &rhs);

    static const Fixed &max(const Fixed &lhs, const Fixed &rhs);

private:
    // Variables
    int value;
    static const int point;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif //MODULE_02_FIXED_HPP
