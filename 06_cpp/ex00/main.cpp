#include "ScalarConverter.hpp"
#include <vector>

int	main (void) {
	std::vector<std::string> testCases;

	//Possible Conversions
	testCases.push_back("A");
	testCases.push_back(" ");
	testCases.push_back("42");
	testCases.push_back("-42");
	testCases.push_back("42.0f");
	testCases.push_back("123.456");
	testCases.push_back("0");
	testCases.push_back("1e-10");
	testCases.push_back("3.14159");

	//Impossible convertions
	// testCases.push_back("inf");
	// testCases.push_back("-inf");
	// testCases.push_back("nan");
	// testCases.push_back("Hello");
	// testCases.push_back("");
	// testCases.push_back("not_a_number");
	// testCases.push_back("123abc");

	try {
		for (std::vector<std::string>::const_iterator it = testCases.begin(); it != testCases.end(); it++) {
			const std::string &test = *it;
			std::cout << "Test: " << test << std::endl;
			ScalarConverter::converter(test);
			std::cout << "-----------------" << std::endl;
		}
	} catch (std::exception &e) {
		std::cerr << e.what();
	}
	return 1;
}
