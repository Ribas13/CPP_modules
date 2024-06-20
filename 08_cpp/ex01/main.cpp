#include "Span.hpp"
#include <ctime>
#include <cstdlib>

/* Test with:

	- Out of range
	- 0 size
	TODO: - element count too small to find a span
	TODO: - long and short span with 2 numbers
 */

int main() {
	srand((time(0)));
	try {
		std::cout << "----------------\n\033[34mSPAN CLASS WITH 0 SIZE\033[0m" << std::endl;
		std::cout << "(should throw exception when we try to find any span)\n" << std::endl;
		Span span(0);

		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Failed ❌" << std::endl;
		std::cout << "----------------" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "\nPassed ✅" << std::endl;
		std::cout << "----------------" << std::endl;
	}
	try {
		std::cout << "\033[34mOUT OF RANGE TEST\033[0m" << std::endl;
		std::cout << "(should throw exception when we try to add +1 number over the range)\n" << std::endl;
		Span span(1000);

		for (int i = 0; i < 1001; i++) {
			span.addNumber(i);
		}

		std::cout << "Range Test Failed ❌" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << " ✅" << std::endl;
	}
	try {
		std::cout << "----------------\n\033[34mTEST FROM THE SUBJECT\033[0m\n" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printNumbers();
		std::cout << "Expected output:\n2\n14\n" << std::endl;
		std::cout << "My output:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		if (sp.shortestSpan() != 2 || sp.longestSpan() != 14)
			std::cout << "Failed ❌" << std::endl;
		else
			std::cout << "\nPassed ✅" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span span(10);

		std::cout << "----------------\n\033[34mBIGGER VECTOR TEST\033[0m\n" << std::endl;
		for (int i = 0; i < 10; i++)
			span.addNumber(rand() % 100);
		span.printNumbers();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "\nPassed ✅" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Failed ❌" << std::endl;
	}
	try {
		std::cout << "----------------\n\033[34mRANGE METHOD TEST\033[0m" << std::endl;
		std::cout << "(should not throw any exceptions)\n" << std::endl;
		Span span(10);

		span.addRange(1, 10);
		span.printNumbers();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "\nPassed ✅" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Failed ❌" << std::endl;
	}
	try {
		std::cout << "----------------\n\033[34m20K NUMBERS TEST\033[0m" << std::endl;
		std::cout << "(should not throw any exceptions)\n" << std::endl;
		Span span(20000);

		for (int i = 0; i < 20000; i++)
			span.addNumber(rand() % 5000000);
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "\nPassed ✅" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Failed ❌" << std::endl;
	}
	try {
		std::cout << "----------------\n\033[34m50K NUMBERS TEST\033[0m" << std::endl;
		std::cout << "(should not throw any exceptions)\n" << std::endl;
		Span span(50000);

		for (int i = 0; i < 50000; i++)
			span.addNumber(rand() % 5000000);
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "\nPassed ✅" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		std::cout << "Failed ❌" << std::endl;
	}
	return 0;
}