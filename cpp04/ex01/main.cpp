#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

    std::cout << "\nTest abstract:" << std::endl;
    Animal *test = new Animal();
    //Animal *test = new Dog();
    test->makeSound();
    test->Animal::makeSound();
    delete test;

	return 0;
}
