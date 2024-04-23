#include "Cat.hpp"

Cat::Cat() : brain(new Brain) {
	std::cout << "Cat constructor called" << std::endl;
	setType("Cat");
}

Cat::Cat(Cat const &src) : Animal(src), brain(new Brain(*src.brain)) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src) {
	if (this != &src) {
		setType(src.getType());
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "...Meow... I'm a... Cat!" << std::endl;
}