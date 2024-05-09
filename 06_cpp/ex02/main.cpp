#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include <ostream>

Base * generate(void) {
	srand(time(0));
	switch (rand() % 3) {
		case 0: return new A;
		case 1: return new B;
		case 2: return new C;
	}
	return 0;
}

// Have to use dynamic cast -> if you attempt to cast a pointer to a type that is
// not the actual object, the result of the cast will be NULL
void identify(Base* p) {
	A* a = dynamic_cast<A*>(p);
	if (a != NULL) {
		std::cout << "Type is A" << std::endl;
	} else {
		B* b = dynamic_cast<B*>(p);
		if (b != NULL) {
			std::cout << "Type is B" << std::endl;
		} else {
			C* c = dynamic_cast<C*>(p);
			if (c != NULL) {
				std::cout << "Type is C" << std::endl;
			} else {
				std::cout << "Not a known type" << std::endl;
			}
		}
	}
}

// needs void otherwise doesnt compile because its not being used
//
// with the reference, the dynamic cast throws an error if the type is different
void identify(Base &p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type is A" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Type is B" << std::endl;
		}
		catch (std::exception &e) {
			try {
				C& c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Type is C" << std::endl;
			}
			catch (std::exception &e) {
				std::cerr << "Not a known type" << std::endl;
			}
		}
	}
}

int main(void) {
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
