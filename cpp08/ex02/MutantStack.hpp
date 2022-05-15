#ifndef MODULE_08_MUTANTSTACK_HPP
#define MODULE_08_MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack<T>( void ){}

	MutantStack<T>( const MutantStack<T> &src ) 
    { 
        *this = src; 
    }

	~MutantStack<T>( void ) 
    {
    }

    MutantStack &operator=(const MutantStack &rhs) {
        if (this != &rhs) {
            std::stack<T>::operator=(rhs);
        }
        return *this;
    }

public:
    typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin( void ) { return this->c.begin(); }
	iterator	end( void ) { return this->c.end(); }
};

#endif //MODULE_08_MUTANTSTACK_HPP
