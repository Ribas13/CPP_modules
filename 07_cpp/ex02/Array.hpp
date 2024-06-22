#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T * _arr;
		unsigned int _size;
	public:
		Array(): _arr(NULL), _size(0) {}
		Array(unsigned int n) {
			_arr = new T[n];
			_size = n;
		}
		Array(Array const & src) : _arr(NULL), _size(0) {
			*this = src;
		}
		Array & operator=(Array const &src) {
			if (this != &src) {
				delete [] _arr;
				_size = src._size;
				_arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_arr[i] = src._arr[i];
			}
			return *this;
		}
		~Array() {
			delete [] _arr;
		}

		//exceptions
		class outOfBounds : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Array index is out of bounds");
				};
		};
		T &operator[](int i) {
			if (i >= static_cast<int>(_size) || i < 0)
				throw outOfBounds();
			return _arr[i];
		}
		unsigned int size(void) const {
			return _size;
		}
};

#endif