#include "Dog.hpp"

Dog::Dog() : brain(new Brain) {
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(Dog const &src) : Animal(src), brain(new Brain(*src.brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src) {
	if (this != &src) {
		setType(src.getType());
		delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Grr! I am a Dog!" << std::endl;
}