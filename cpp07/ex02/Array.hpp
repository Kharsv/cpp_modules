#ifndef MODULE_07_ARRAY_HPP
#define MODULE_07_ARRAY_HPP

template<typename T>
class Array {

public:
	Array<T>( void ): arraySize(0), arrayT(NULL)
	{
	}

	Array<T>( const unsigned int arraySize ): arraySize(arraySize)
	{
		if (arraySize < 0)
			throw std::overflow_error("Index out of range");
		else if (arraySize == 0)
			this->arrayT = nullptr;
		else
			this->arrayT = new T[arraySize];
	}

	Array<T>( const Array<T> &src )
	{
		*this = src;
	}

	~Array<T>( void )
	{
		if (this->arraySize > 0)
			delete [] this->arrayT;
	}

	Array<T>    &operator=( const Array<T> &rhs )
	{
		if (this == &rhs)
			return *this;
            
		if (this->arraySize > 0)
			delete [] this->arrayT;

		this->arraySize = rhs.size();
		this->arrayT = new T[this->arraySize];
        
		for (int i = 0; i < this->arraySize; i++)
			this->arrayT[i] = rhs[i];

		return *this;
	}

	T   &operator[](const int index) const
	{
		if (index >= this->arraySize || index < 0 || this->arrayT == nullptr)
			throw std::exception();

		return this->arrayT[index];
	}


public:
	int			size( void ) const
	{
		return this->arraySize;
	}
    
private:
	int		arraySize;
	T		*arrayT;

};

#endif //MODULE_07_ARRAY_HPP
