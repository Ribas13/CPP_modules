#include "iter.hpp"

template <typename T>
void print(T var) {
	std::cout << var << std::endl;
}

int main() {
	int int_arr[] = {1, 2, 3, 4, 5};
	char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
	std::string str_arr[] = {"ola", "o", "meu", "nome", "e diogo"};

	std::cout << "INT ARR" << std::endl;
	iter(int_arr, 5, print);
	std::cout << "--------------\nCHAR ARR:" << std::endl;
	iter(char_arr, 5, print);
	std::cout << "--------------\nSTRING ARR:" << std::endl;
	iter(str_arr, 5, print);
	std::cout << "\n\nTest over" << std::endl;
	return 0;
}
