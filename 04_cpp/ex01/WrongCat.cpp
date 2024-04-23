#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src) {
	type = src.getType();
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "This cat is weird, let me pet it. BAHHHHHHHHH" << std::endl;
}