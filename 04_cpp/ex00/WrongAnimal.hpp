#ifndef WRONGANIMAL_HPP
 #define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const &src);
		virtual ~WrongAnimal();

		std::string getType() const;
		void setType(const std::string& newType);
		virtual void makeSound() const;
};

#endif