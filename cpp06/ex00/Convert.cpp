#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <cerrno>
#include <cstring>
#include "Convert.hpp"

std::string Converter::to_char(char *str) {
    char *end = nullptr;
    errno = 0;
    long x = strtol(str, &end, 10);
    if (errno == 0 && (x > UCHAR_MAX || x < 0))
        errno = ERANGE;

    std::ostringstream temp;

    if (errno != 0)
        temp << std::strerror(errno);
    else if (str == end)
        temp << "Impossible";
    else if (!isprint((int) x))
        temp << "Non displayable";
    else
        temp << "'" << static_cast<unsigned char>(x) << "'";

    return temp.str();
}

std::string Converter::to_int(char *str) {
    char *end = nullptr;
    errno = 0;
    long x = strtol(str, &end, 10);
    if (errno == 0 && (x > INT_MAX || x < INT_MIN))
        errno = ERANGE;

    std::ostringstream temp;

    if (errno != 0)
        temp << std::strerror(errno);
    else if (str == end)
        temp << "Impossible";
    else
        temp << static_cast<int>(x);

    return temp.str();
}

std::string Converter::to_float(char *str) {
    errno = 0;
    double test;
    float x = strtof(str, nullptr);

    std::ostringstream temp;

    if (errno != 0)
        temp << std::strerror(errno);
    else if (modf(x, &test) == 0)
        temp << std::fixed << std::setprecision(1) << x << "f";
    else
        temp << x << "f";

    return temp.str();
}

std::string Converter::to_double(char *str) {
    errno = 0;
    double test;
    double x = strtod(str, nullptr);

    std::ostringstream temp;

    if (errno != 0)
        temp << std::strerror(errno);
    else if (modf(x, &test) == 0)
        temp << std::fixed << std::setprecision(1) << x;
    else
        temp << x;

    return temp.str();
}
