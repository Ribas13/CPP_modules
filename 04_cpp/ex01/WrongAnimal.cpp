#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src) {
	type = src.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(const std::string& newType) {
	type = newType;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Generic WrongAnimal sound" << std::endl;
}