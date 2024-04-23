#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	setType("Cat");
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &src) {
	type = src.getType();
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "...Meow... I'm a... Cat!" << std::endl;
}