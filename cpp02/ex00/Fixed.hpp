#ifndef MODULE_02_FIXED_HPP
#define MODULE_02_FIXED_HPP


#include <ostream>

class Fixed {

public:
    Fixed();

    Fixed(const Fixed &fixed);

    virtual ~Fixed();

    Fixed &operator=(const Fixed &rhs);

public:
    int getRawBits() const;

    void setRawBits(int raw);

    friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

private:
    int value;
    static const int point;

};


#endif //MODULE_02_FIXED_HPP
