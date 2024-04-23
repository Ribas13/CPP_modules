#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	{
		const Animal* pack[10];
		for (int i = 0; i < 10; i++) {
			if (i % 2)
				pack[i] = new Dog();
			else
				pack[i] = new Cat();
		}
		for (int i = 0; i < 10; i++) {
			std::cout << i << ": ";
			pack[i]->makeSound();
		}
		for (int i = 0; i < 10; i++) {
			delete pack[i];
		}
	}
	{
		std::cout << std::endl << "Copy constructors: " << std::endl;
		const Dog* dog = new Dog;
		const Cat* cat = new Cat;
		const Animal* other = new Dog(*dog);
		const Animal* another = new Cat(*cat);

		dog->makeSound();
		other->makeSound();
		cat->makeSound();
		another->makeSound();
		delete dog;
		delete other;
		delete cat;
		delete another;
	}
	//testing for deep copy
	std::cout << std::endl << std::endl;
	Dog test;
	{
		Dog tmp = test;
	}
}