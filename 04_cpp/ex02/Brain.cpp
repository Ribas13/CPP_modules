#include "Brain.hpp"

Brain::Brain() : ideas() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = src.ideas[i];
	}
}

Brain &Brain::operator=(Brain const &src) {
	if (this != &src) {
		std::cout << "Brain assignment operator" << std::endl;
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = src.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor caleed" << std::endl;
}