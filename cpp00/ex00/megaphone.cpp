#include <iostream>

int		ft_isLetter(char sym)
{
	if (sym >= 'a' && sym <= 'z')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int	x;
	int	y;

	y = 1;
	x = 0;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (y < argc) {
			while (argv[y][x] != '\0') {
				if (ft_isLetter(argv[y][x]))
					std::cout << (char)(argv[y][x] - 32);
				else
					std::cout << (char)(argv[y][x]);
				++x;
			}
			x = 0;
			++y;
		}
	}
	std::cout << "\n";
	return (0);
}