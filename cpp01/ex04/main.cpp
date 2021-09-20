#include "header.hpp"

int ft_error ( std::string str ) {
	std::cout << str << std::endl;
	return -1;
}

int ft_strlen ( char *str ) {
	int i = 0;

	while (str[i] != '\0')
		++i;
	return i;
}

int main ( int argc, char **argv ) {

	char            *filename = argv[1];
	char            *s1 = argv[2];
	char            *s2 = argv[3];
	std::string     filename_replace = filename;
	std::string     filename_content;
	std::string     new_content;
	std::fstream    io_put;


	filename_replace += ".replace";

	if ( argc != 4 )
		return ft_error( "ERROR: Invalid number of arguments." );
	if ( s1 == NULL || s2 == NULL || filename == NULL)
		return ft_error( "ERROR: Empty string." );

	io_put.open( filename, std::fstream::out | std::fstream::in );
	if ( !io_put.is_open() )
		return ft_error ( "ERROR: FD is empty." );

	std::ofstream	output(filename_replace.c_str());

	while ( std::getline(io_put, filename_content) ) {
		int pos = 0;
		while ((pos = (int)filename_content.find(s1, pos)) != -1) {
			filename_content.erase(pos, ft_strlen(s1));
			filename_content.insert(pos, s2);
			pos += ft_strlen(s2);
		}
		new_content += filename_content + "\n";
	}

	output << new_content;
	io_put.close();
	output.close();

	return 0;
}
