#ifndef MODULE_08_SPAN_HPP
#define MODULE_08_SPAN_HPP


#include "vector"

class Span {
public:

	Span(void);
	Span(unsigned int Size);
	Span(const Span &src);
	~Span(void);

	Span	&operator=( const Span &rhs );

	void			addNumber(int number);
    int				shortestSpan( void ) const;
	int				longestSpan( void ) const;


private:

	unsigned int		N;
	std::vector<int>	storage;
};

#endif //MODULE_08_SPAN_HPP
