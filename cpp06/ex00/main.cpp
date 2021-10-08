#include "Convert.hpp"

int		ftError( const std::string str) {
	std::cout << str << std::endl;
	return -1;
}

int		isDigit( char sym ) {
	if (sym >= 48 && sym <= 57)
		return 1;
	return 0;
}




int main ( int argc, char **argv ) {
	if (argc != 2)
		return ftError( "ERROR: Inavlid number of arguments!" );

	Convert convert;
	// Set value
	convert.setValue( argv[1] );

	// Parse value
	convert.parseValue( convert.getValue() );

	std::cout << "\n---------------------------\n" << std::endl;

	convert.convertToChar( convert.getType() );
	// convert.convertToInt();

	std::cout << "\n---------------------------\n" << std::endl;



}
