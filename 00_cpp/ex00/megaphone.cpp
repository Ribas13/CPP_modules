#include <ostream>
#include <iostream>

int	main(int ac, char **av)
{

	if (ac == 1)
		std::cout << "* LOUND AND UBEARABLE FEEDBACK NOISES *" << std::endl;
	else
	{
		char	c;
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				c = av[i][j];
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					c -= 32;
				std::cout << c;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
