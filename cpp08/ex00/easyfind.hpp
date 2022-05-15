#ifndef MODULE_08_EASYFIND_HPP
#define MODULE_08_EASYFIND_HPP

template <typename T>
typename T::iterator	easyfind( T &data, int target )
{
	typename T::iterator	result = find(data.begin(), data.end(), target);
	
	if (result == data.end())
		throw std::overflow_error("Not found");

	return result;
}


#endif //MODULE_08_EASYFIND_HPP
