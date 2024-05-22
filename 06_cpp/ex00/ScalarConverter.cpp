#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	(void) src;
	std::cout << "ScalarConverter copy constructor" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
	(void) src;
	return *this;
}

void ScalarConverter::converter(int value) {
	std::cout << "char: ";
	if (value < 32 || value > 126)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void ScalarConverter::converter(char value) {
	std::cout << "char: '" << value << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void ScalarConverter::converter(double value) {
	std::cout << "char: ";
	if (value < 32 || value > 126)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	if (value > static_cast<double>(std::numeric_limits<double>::max()) || value < static_cast<double>(std::numeric_limits<double>::min()))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::showpoint << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}

void ScalarConverter::converter(float value) {
	std::cout << "char: ";
	if (value < 32 || value > 126)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	if (value > static_cast<float>(std::numeric_limits<int>::max()) || value < static_cast<float>(std::numeric_limits<int>::min()))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << std::fixed << std::showpoint << value << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

const char *ScalarConverter::ImpossibleConversion::what() const throw() {
	return ("char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n");
}

void ScalarConverter::ScalarConverter::displayLimits(std::string Flimit, std::string Dlimit) {
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << Flimit << std::endl;
	std::cout << "double: " << Dlimit << std::endl;

	exit(1);
}

void ScalarConverter::converter(std::string value) {
	const std::string Flimits[4] = {"inff", "-inff", "+inff", "nanf"};
	const std::string Dlimits[4] = {"inf", "-inf", "+inf", "nan"};

	for (int i = 0; i < 4; i++) {
		if (value == Flimits[i] || value == Dlimits[i])
			displayLimits(Flimits[i], Dlimits[i]);
	}
	converterType(value);
}

void ScalarConverter::converterType(std::string value) {
	const std::string existingTypes[4] = {"int", "char", "float", "double"};
	std::string type = getType(value.c_str());

	int	i = 0;

	while (i < 4 && existingTypes[i].compare(type))
		i++;
	switch (i + 1)
	{
		case 1:
		{
			std::istringstream numberStream(value);
			int valueInt;
			numberStream >> valueInt;
			return converter(valueInt);
		}
		case 2:
			return converter(value[0]);
		case 3:
		{
			std::istringstream numberStream(value);
			float valueFloat;
			numberStream >> valueFloat;
			return converter(valueFloat);
		}
		case 4:
		{
			std::istringstream numberStream(value);
			double valueDouble;
			numberStream >> valueDouble;
			return converter(valueDouble);
		}
		default:
		{
			throw (ImpossibleConversion());
		}
	}
}

std::string ScalarConverter::getType(const std::string &input) {
	if (!input.size())
		return "invalid";
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
        {
            while(input[i])
            {
                i++;
                if (input[i] == 'f' && !isdigit(input[i-1]))
                    return "invalid";
            }
        }
    }
    if (input == "inff" || input == "nanf" || input == "-inff")
    {
        return "float";
    }
	if (input == "inf" || input == "nan" || input == "-inf")
	{
		return "double";
	}
    if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
    {
        return "char";
    }
    if (input[input.size() - 1] == 'f')
    {
        std::string floatStr = input.substr(0, input.size() - 1);
        std::stringstream ssFloat(floatStr);
        float floatVal;
        if (ssFloat >> floatVal && ssFloat.eof())
        {
            return "float";
        }
    }
    std::stringstream ssInt(input);
    int intVal;
    if (ssInt >> intVal && ssInt.eof())
    {
        return "int";
    }
    std::stringstream ssDouble(input);
    double doubleVal;
    if (ssDouble >> doubleVal && ssDouble.eof())
    {
        return "double";
    }
    return "invalid";
}
