#include "algorithm"
#include "Span.hpp"

Span::Span(void) : N(0) {}

Span::Span(unsigned int N) : N(N) , storage(0) {}

Span::Span( Span const &src) 
{
	*this = src;
	return;
}

Span::~Span() {}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		storage = rhs.storage;
		N = rhs.N;
	}
	return *this;
}

void	Span::addNumber(int num) {
	if (storage.size() < N)
		storage.push_back(num);
	else
		throw std::exception();
}

int	Span::shortestSpan( void ) const
{
	std::vector<int>    tmp = storage;

	std::vector<int>::iterator	it;
	if (storage.size() < 2)
		throw std::logic_error("There are less than 2 stored numbers");

	sort(tmp.begin(), tmp.end());

	return *(tmp.begin() + 1) - *tmp.begin();
}

int	Span::longestSpan( void ) const
{
	std::vector<int>	tmp = storage;

	if (storage.size() < 2)
		throw std::logic_error("There are less than 2 stored numbers");

	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

