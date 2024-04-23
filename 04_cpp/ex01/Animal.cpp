#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &src) {
	type = src.getType();
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(const std::string& newType) {
	type = newType;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Generic animal sound" << std::endl;
}