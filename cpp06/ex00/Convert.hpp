#ifndef MODULE_06_CONVERT_HPP
#define MODULE_06_CONVERT_HPP

#include <string>

class Converter {

public:
    static std::string to_char(char *str);

    static std::string to_int(char *str);

    static std::string to_float(char *str);

    static std::string to_double(char *str);

};

#endif //MODULE_06_CONVERT_HPP
