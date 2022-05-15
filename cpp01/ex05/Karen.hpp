#ifndef MODULE01_KAREN_HPP
#define MODULE01_KAREN_HPP
#include <iostream>

class Karen {
public:
	Karen();

	void complain(const std::string level);

private:
	void debug();

	void info();

	void warning();

	void error();

	void mute();

	std::pair<std::string, void (Karen::*)()> dictionary[5];
};

#endif //MODULE01_KAREN_HPP
