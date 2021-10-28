#include "Convert.hpp"

int wrtError ( std::string str ) {
	std::cout << str << std::endl;
	return -1;
}




int main ( int argc, char **argv ) {
	if (argc != 2)
		return wrtError("ERROR: Invalid number of arguments!");
	
	Convert convert;
	try {
		convert.convToChar(argv[1]);
		convert.convToInt(argv[1]);
		convert.convToFloat(argv[1]);
		convert.convToDouble(argv[1]);
	} catch (Convert::Trash()) {}












	return 0;
}