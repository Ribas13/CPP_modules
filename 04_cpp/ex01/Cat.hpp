#ifndef CAT_HPP
 #define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(Cat const &src);
		Cat& operator=(const Cat& src);
		~Cat();

		void makeSound() const;
};

#endif