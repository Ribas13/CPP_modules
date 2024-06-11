#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//iter - params - address of an array / len of the array / func() on every element
template <typename T>
void iter(T *arr, int len, void (*func)(T const &arr)) {
	for (int i = 0; i < len; i++) {
		func(arr[i]);
	}
}

#endif