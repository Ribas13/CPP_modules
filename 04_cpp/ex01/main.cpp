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
	std::cout << std::endl << "testing for deep copy: " << std::endl;
	std::cout << "if the copy is shallow, dog test and tmp will use the same brain and the brain will get deleted with tmp at the end of the scope" << std::endl;
	std::cout << std::endl;
	Dog test;
	{
		Dog tmp = test;
	}
}