#include <ostream>
#include <iostream>

std::string toUpperCase(const std::string &str) {
	std::string res = str;
	for (size_t i = 0; i < res.size(); i++) {
		res[i] = std::toupper(res[i]);
	}
	return res;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUND AND UBEARABLE FEEDBACK NOISES *";
	else
	{
		std::string upper_str;
		for (int i = 1; i < ac; i++)
		{
			upper_str = toUpperCase(av[i]);
			std::cout << upper_str;
			if (i >= ac)
				break ;
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
