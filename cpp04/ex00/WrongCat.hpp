#ifndef MODULE_04_WRONGCAT_HPP
#define MODULE_04_WRONGCAT_HPP


#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();

    WrongCat(const WrongCat &cat);

    virtual ~WrongCat();

    WrongCat &operator=(const WrongCat &rhs);

public:
    void makeSound() const;

};


#endif //MODULE_04_WRONGCAT_HPP
