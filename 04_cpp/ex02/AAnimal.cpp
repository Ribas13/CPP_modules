#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src) {
	type = src.getType();
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::setType(const std::string& newType) {
	type = newType;
}

std::string AAnimal::getType() const {
	return type;
}

void AAnimal::makeSound() const {
	std::cout << "Generic animal sound" << std::endl;
}