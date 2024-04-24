#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* genAnimal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* weird_animal = new WrongAnimal();
	const WrongAnimal* weird_cat = new WrongCat();

	std::cout << std::endl << "Types: " << std::endl;
	std::cout << "genAnimal: " << genAnimal->getType() << std::endl;
	std::cout << "dog: " << dog->getType() << std::endl; 
	std::cout << "cat: " << cat->getType() << std::endl;
	std::cout << "weird_animal: " << weird_animal->getType() << std::endl;
	std::cout << "weird_cat: " << weird_cat->getType() << std::endl;

	std::cout << std::endl << "Sounds:" << std::endl;
	std::cout << "genAnimal: ";
	genAnimal->makeSound();
	std::cout << std::endl;
	std::cout << "dog: ";
	dog->makeSound();
	std::cout << std::endl; 
	std::cout << "cat: ";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << "weird_animal: ";
	weird_animal->makeSound();
	std::cout << std::endl;
	std::cout << "weird_cat: ";
	weird_cat->makeSound();
	std::cout << std::endl;


	delete genAnimal;
	delete dog;
	delete cat;
	delete weird_animal;
	delete weird_cat;

	std::cout << std::endl << "Testing copy constructor:" << std::endl << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	std::cout << "cat type: " << cat2.getType() << std::endl << std::endl;
}