#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class OutOfRangeException : public std::exception {
	public:
		virtual const char* what() const throw() {return "Out of range";};
};

template <typename T>
typename T::iterator easyfind(T &haystack, int needle) {
	typename T::iterator i;

	i = std::find(haystack.begin(), haystack.end(), needle); // <-- from stl algorithms
	if (i != haystack.end())
		return i;
	else
		throw OutOfRangeException();
}

#endif