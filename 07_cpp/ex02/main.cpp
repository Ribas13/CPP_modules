#include "Array.hpp"
#include <ctime>
#include <cstdlib>

int main() {
	Array<int> n(10);

	for (int i = 0; i < 10; i++) {
		const int value = rand();
		n[i] = value;
	}
	std::cout << "Array before changes:\n" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "n[" << i << "]: " << n[i] << std::endl;
	}
	std::cout << "\nArray after changes:" << std::endl;
	try {
		n[0] = 0;
		std::cout << std::endl;
		for (int i = 0; i < 10; i++) {
			std::cout << "n[" << i << "]: " << n[i] << std::endl;
		}
		// n[-1] = 5; // <-- will throw out of bounds exception
		// n[11] = 5; // <-- will throw out of bounds exception
		std::cout << "Working fine" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

//subject main under this comment

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
// 		// std::cout << "mirror value at " << i << ": " << mirror[i] << std::endl;
//         if (mirror[i] != numbers[i]) //will print error message if the values are different
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0; // will throw exception (out of bounds) - index cannot be negative
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
// 		std::cout << "trying to set index: " << MAX_VAL << " as 0" << std::endl;
// 		// Wont work because MAX_VAL is the array size, thus the index is not valid
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
// 		// std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
//     }
//     delete [] mirror;//
//     return 0;
// }