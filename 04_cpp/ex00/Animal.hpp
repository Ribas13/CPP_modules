#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>

/* Class destructor need to be virtual in order to ensure
	the correct destructor is called when an object of a
	derived class is deleted through a pointer to the base
	class */

/* The makeSound function is declared virtual because other
classes will have their own implementation of the function */

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &src);
		Animal& operator=(const Animal& src);
		virtual ~Animal();

		std::string getType() const;
		void setType(const std::string& newType);
		virtual void makeSound() const;
		
};

#endif