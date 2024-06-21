#include "Span.hpp"

Span::Span() : _N(0) {
	//std::cout << "Span default constructor" << std::endl;
}

Span::Span(unsigned int N) : _N(N) {
	//std::cout << "Span with parameter constructor" << std::endl;
}

Span::Span(Span const & src) {
	//std::cout << "Span copy constructor" << std::endl;
	*this = src;
}

Span::~Span() {
	//std::cout << "Span destructor called" << std::endl;
}

Span & Span::operator=(Span const & src) {
	std::cout << "Span assignment operator called" << std::endl;
	if (this != &src) {
		_N = src._N;
		_vector = src._vector;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (_vector.size() < _N)
		_vector.push_back(number);
	else
		throw Span::OutOfRangeException();
}

void Span::printNumbers() {
	//sort a copy of the vector and then look at the elements
	std::vector<int> vector_copy = _vector;
	std::sort(vector_copy.begin(), vector_copy.end());
	int low_number = vector_copy[0];
	int high_number = *std::max_element(_vector.begin(), _vector.end());

	std::vector<int>::iterator it;
	int i = 0;
	for (it = _vector.begin(); it != _vector.end(); it++, i++) {
		std::cout << _vector[i];
		if (_vector[i] == low_number)
			std::cout << " <-- Lowest number";
		else if (_vector[i] == high_number)
			std::cout << " <-- Highest number";
		std::cout << std::endl;
	}
	std::cout << "----------------" << std::endl;
}

int Span::shortestSpan() {
	if (_vector.size() == 0 || _vector.size() == 1)
		throw NoSpanFound();
	std::vector<int> vector = _vector;
	std::sort(vector.begin(), vector.end());
	int distance = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < (vector.size() - 1); i++) {
		int curr_dist = vector[i + 1] - vector[i];
		if (curr_dist < distance)
			distance = curr_dist;
	}
	return distance;
}

int Span::longestSpan() {
	if (_vector.size() == 0 || _vector.size() == 1)
		throw NoSpanFound();
	int lowest_number = *std::min_element(_vector.begin(), _vector.end());
	int highest_number = *std::max_element(_vector.begin(), _vector.end());
	return (highest_number - lowest_number);
}

void Span::addRange(int start, int end) {
	if (end < start)
		throw std::invalid_argument("End must be bigger than start");
	int rangeSize = end - start + 1;
	if (_vector.size() + rangeSize > _N)
		throw Span::OutOfRangeException();
	for (int i = start; i <= end; i++)
		_vector.push_back(i);
}

const char* Span::NoSpanFound::what() const throw() {
	return "No span can be found";
}

const char* Span::OutOfRangeException::what() const throw() {
	return "Out of range";
}