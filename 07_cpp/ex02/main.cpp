#include "Array.hpp"
#include <ctime>
#include <cstdlib>

int main() {
	Array<int> n(10);

	for (int i = 0; i < 10; i++) {
		const int value = rand();
		n[i] = value;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << "n[" << i << "]: " << n[i] << std::endl;
	}
	try {
		n[0] = 0;
		std::cout << std::endl;
		for (int i = 0; i < 10; i++) {
			std::cout << "n[" << i << "]: " << n[i] << std::endl;
		}
		// n[-1] = 5; // <-- will throw out of bounds exception
		//n[11] = 5; // <-- will throw out of bounds exception
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}