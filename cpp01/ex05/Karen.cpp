#include "Karen.hpp"

Karen::Karen() {
	dictionary[0].first = "DEBUG";
    dictionary[0].second = &Karen::debug;
    dictionary[1].first = "INFO";
    dictionary[1].second = &Karen::info;
    dictionary[2].first = "WARNING";
    dictionary[2].second = &Karen::warning;
    dictionary[3].first = "ERROR";
    dictionary[3].second = &Karen::error;
    dictionary[4].second = &Karen::mute;
}

void Karen::complain(const std::string level) {
	int i = 0;
    while (i < 4 && dictionary[i].first != level)
        i++;
    (this->*dictionary[i].second)();
}
void Karen::debug() {
	std::cout << "I love to get extra bacon for my "
	             "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money. "
	             "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. "
	             "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::mute() {
	std::cout << "No such level. Mute." << std::endl;
}
