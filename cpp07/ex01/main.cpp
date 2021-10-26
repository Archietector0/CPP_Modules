#include "MyFuncs.hpp"

int main () {
    int         intArr[] = {56, 0, -456, 690, 75, 3054};
    double      dblArr[] = {56.78, 0.0, -54.90, 69.43, 7.5, 30.54};
    std::string strArr[] = {"Michael", "Arseniy", "Vladimir"};

    size_t  lenInt = 6;
    int     lenDbl = 6;
    int     lenStr = 3;
    
    

    ::iter(intArr, lenInt, ::print);
    std::cout << "-----------------------------" << std::endl;

    ::iter(dblArr, lenDbl, ::print);
    std::cout << "-----------------------------" << std::endl;

    ::iter(strArr, lenStr, ::print);
    std::cout << "-----------------------------" << std::endl;
    
    return 0;
}