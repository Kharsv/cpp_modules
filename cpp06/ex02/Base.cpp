#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

Base::~Base() {}

Base *generate() {
    std::srand(time(nullptr));
    int test = std::rand();
    if (test % 3 == 0) {
        std::cout << "Generated class: A" << std::endl;
        return new A();
    }
    else if (test % 3 == 1) {
        std::cout << "Generated class: B" << std::endl;
        return new B();
    }
    else {
        std::cout << "Generated class: C" << std::endl;
        return new C();
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << "Pointer class: A" << std::endl;
    else if (dynamic_cast<B *>(p) != nullptr)
        std::cout << "Pointer class: B" << std::endl;
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << "Pointer class: C" << std::endl;
}

void identify(Base &p) {
    try {
        (void) dynamic_cast<A &>(p);
        std::cout << "Reference class: A" << std::endl;
        return;
    } catch (std::exception &e) {
        (void) e;
    }

    try {
        (void) dynamic_cast<B &>(p);
        std::cout << "Reference class: B" << std::endl;
        return;
    } catch (std::exception &e) {
        (void) e;
    }

    try {
        (void) dynamic_cast<C &>(p);
        std::cout << "Reference class: C" << std::endl;
        return;
    } catch (std::exception &e) {
        (void) e;
    }
}
