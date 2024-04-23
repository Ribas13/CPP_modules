#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/* Abstract class
	
	An abstract class is a class that has at least one
	pure virtual function (in this case:
	
		virtual void makeSound() const = 0
	)
	A pure virtual function is declared by assigning 0 in
	its declaration
	
	Note:
	
	An abstract class cannot be instantiated, meaning you
	cannot create an object of an abstract class. Their
	purpose is to provide an appropriate base class from
	which other classes can inherit from.
	
	Subclasses of an abstract class must implement all
	pure virtual functions, or they, too, will be
	considered abstract classes */

int main(void) {
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	//with this the program won't compile because the class is abstract
	//const AAnimal* other = new AAnimal();

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
}

//main from ex01 to test if needed
/* int main(void) {
	{
		const AAnimal* pack[10];
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
		const AAnimal* other = new Dog(*dog);
		const AAnimal* another = new Cat(*cat);

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
} */