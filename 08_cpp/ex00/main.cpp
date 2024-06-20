#include "easyfind.hpp"

int main() {
	std::vector<int> container;
	container.push_back(5);
	container.push_back(10);
	container.push_back(7);
	container.push_back(11);

	try {
		std::vector<int>::iterator i = easyfind(container, 11);
		std::cout << "Element found in position: " << std::distance(container.begin(), i) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator i = easyfind(container, 13); // <-- will throw out of bounds exception
		std::cout << "Element found in position: " << std::distance(container.begin(), i) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}