#ifndef AANIMAL_HPP
 #define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal& operator=(const AAnimal& src);
		virtual ~AAnimal();

		std::string getType() const;
		void setType(const std::string& newType);
		virtual void makeSound() const = 0;
		
};

#endif