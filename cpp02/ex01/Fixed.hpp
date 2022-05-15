#ifndef MODULE_02_FIXED_HPP
#define MODULE_02_FIXED_HPP


class Fixed {

public:
    Fixed();

    Fixed(const Fixed &fixed);

    explicit Fixed(int value);

    explicit Fixed(float value);

    virtual ~Fixed();

    Fixed &operator=(const Fixed &rhs);

public:
    int getRawBits() const;

    void setRawBits(int raw);

    float toFloat() const;

    int toInt() const;

private:
    int value;
    static const int point;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif //MODULE_02_FIXED_HPP
