#include "Karen.hpp"

static	int		ft_complain(std::string level){
	std::string		array[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
};
	int i = 0;
	while (array[i] != level && i < 4)
		i++;
	return (i);
}

int ft_error ( std::string str ) {
    std::cout << str << std::endl;
    return -1;
}


int main ( int argc, char **argv ) {
    Karen karen;
    
    if ( argc != 2 )
        return ft_error ( "ERROR: Invalid number of arguments." );
    
    switch(ft_complain(argv[1]))
	{
		case 4:
			std::cout << "Probably complaining about insignificant problems.." << std::endl;
			break ;
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
	}
    
    return 0;
}