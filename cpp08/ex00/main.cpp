#include "easyfind.hpp"

int main () {

    // std::vector<int> intVector{10, 25, 34, 67, 87, 101, 54, -23};
    std::vector<int> intVector;

    try {
  
    // Generation 
    for (int i = 0; i < 10; ++i) {
        intVector.push_back(5 + 3 * i);
    }
    std::cout << "\n-----------__ARRAY__--------------\n" << std::endl;

    for (int b = 0; b < static_cast<int> (intVector.size()); ++b) {
       std::cout << b + 1 << ") " << intVector[b] << std::endl;
    }
    
    std::cout << "\n----------------------------------" << std::endl;
    std::cout << "-----------__RESULT__-------------\n" << std::endl;

    std::cout << "Result finding of 5: " << *easyfind(intVector, 5) << std::endl;
    std::cout << "Result finding of 8: " <<*easyfind(intVector, 8) << std::endl;
    std::cout << "Result finding of 11: " <<*easyfind(intVector, 11) << std::endl;
    std::cout << "Result finding of 20: " <<*easyfind(intVector, 20) << std::endl;
    std::cout << "Result finding of 32: " <<*easyfind(intVector, 32) << std::endl;

    *easyfind(intVector, 324);
    std::cout << "\n----------------------------------" << std::endl;
    } catch (std::string exc) {
        std::cout << exc << std::endl;
    }

    return 0;
}