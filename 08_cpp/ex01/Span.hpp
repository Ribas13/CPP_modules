#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span {
	private:
		unsigned int _N;
		std::vector<int> _vector;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		Span & operator=(Span const & src);
		~Span();

		void addNumber(int n); // <- add a single number to the span
		int shortestSpan();
		int longestSpan();
		void printNumbers();

		void addRange(int start, int end);

		//Exceptions
		class NoSpanFound : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class OutOfRangeException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif