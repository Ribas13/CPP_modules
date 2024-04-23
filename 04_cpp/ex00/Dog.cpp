#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &src) {
	type = src.getType();
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Grr! I am a Dog!" << std::endl;
}