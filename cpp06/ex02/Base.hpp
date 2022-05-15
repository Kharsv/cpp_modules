#ifndef MODULE_06_BASE_HPP
#define MODULE_06_BASE_HPP


class Base {

public:
    virtual ~Base();

};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base *generate();

void identify(Base *p);

void identify(Base &p);


#endif //MODULE_06_BASE_HPP
