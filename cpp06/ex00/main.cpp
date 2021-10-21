#include "Convert.hpp"

int wrtError ( std::string str ) {
    std::cout << str << std::endl;
    return -1;
}


int main ( int argc, char **argv ) {
    if ( argc != 2 )
        return wrtError("ERROR: Invalid number of arguments.");
    
    Convert convert;
    convert.setParametr( argv[1] );

    if (convert.convToChar())
        return wrtError("ERROR: Invalid argument value.");
    if (convert.convToInt())
        return wrtError("ERROR: Invalid argument value.");
    if (convert.convToFloat())
        return wrtError("ERROR: Invalid argument value.");














    return 0;
}