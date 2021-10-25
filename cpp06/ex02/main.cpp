#include "Base.hpp"

int main () {
    std::cout << "\n-----------START------------\n" << std::endl;

    Base *base;

    base = generate();
    std::cout << "Generate random adress: " << base << std::endl;


    Base *secBase = new Base();

    secBase = generate();
    std::cout << "Generate random adress: " << secBase << std::endl;

    identify ( base );
    identify ( *secBase );

    std::cout << "\n------------END-------------\n" << std::endl;
    


    delete base;
    delete secBase;

    return 0;
}