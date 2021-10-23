#include "Convert.hpp"

int wrtError ( std::string str ) {
	std::cout << str << std::endl;
	return -1;
}




int main ( int argc, char **argv ) {
	if (argc != 2)
		return wrtError("ERROR: Invalid number of arguments!");
	
	Convert convert;
	// std::cout << argv << std::endl;


	convert.convToChar(argv[1]);
	convert.convToInt(argv[1]);
	convert.convToFloat(argv[1]);
	// convert.convToDouble(argv[1]);












	return 0;
}