#include "MyFuncs.hpp"

int main () {
    int         intArr[] = {56, 0, -456, 690, 75, 3054};
    double      dblArr[] = {56.78, 0.0, -54.90, 69.43, 7.5, 30.54};
    std::string strArr[] = {"Michael", "Arseniy", "Vladimir"};

    size_t  lenInt = 6;
    int     lenDbl = 6;
    int     lenStr = 3;
    
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "~~~~~~~~__CHECK_INT__~~~~~~~~" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

    ::iter(intArr, lenInt, ::print);
    
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "~~~~~~__CHECK_DOUBLE__~~~~~~~" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

    ::iter(dblArr, lenDbl, ::print);
    
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "~~~~~~~__CHECK_STRING__~~~~~~" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

    ::iter(strArr, lenStr, ::print);
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

    
    return 0;
}