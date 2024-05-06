#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cfloat>
#include <stdlib.h>
#include <sstream>
#include <exception>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &src);
		~ScalarConverter();

		static void converter(int value);
		static void converter(char value);
		static void converter(double value);
		static void converter(float value);
		static void converterType(std::string value);
		static void displayLimits(std::string Flimit, std::string Dlimit);
		static std::string getType(std::string value);
		static int checkChar(std::string value);
		static int checkInt(std::string value);
		static int checkFloat(std::string value);
		static int checkDouble(std::string value);
	public:
		static void converter(std::string value);

		class ImpossibleConversion : public std::exception {
			private:
				virtual const char *what() const throw();
		};
};

#endif