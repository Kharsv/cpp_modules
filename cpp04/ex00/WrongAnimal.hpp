#ifndef MODULE_04_WRONGANIMAL_HPP
#define MODULE_04_WRONGANIMAL_HPP


#include <string>

class WrongAnimal {

public:
    WrongAnimal();

    WrongAnimal(const WrongAnimal &animal);

    explicit WrongAnimal(const std::string &type);

    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &rhs);

public:
    const std::string &getType() const;

    void makeSound() const;

protected:
    std::string type;

};


#endif //MODULE_04_WRONGANIMAL_HPP
