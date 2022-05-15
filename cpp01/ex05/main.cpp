#include "Karen.hpp"

int main() {
	Karen karen;

	std::cout << "Good formatting:" << std::endl;
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");

	std::cout << "------------\nBad formatting:" << std::endl;
	karen.complain("DEBU");
	karen.complain("Debug");
	karen.complain("debug");
	karen.complain("123");
	karen.complain("");
	return (0);
}