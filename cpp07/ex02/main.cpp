#include "Array.hpp"

int main ( ) {

	try{
	Array <int>intArray;
	std::cout << "Size is : " << intArray.getSizeArr() << std::endl;
	std::cout << std::endl;

	Array <unsigned int> unsignedArray(2);
	unsignedArray[0] = 20;
	unsignedArray[1] = 5;
	std::cout << "Size is : " << unsignedArray.getSizeArr() << std::endl;
	std::cout  << "[0] is : " << unsignedArray[0]  << std::endl;
	std::cout  << "[1] is : " << unsignedArray[1]  << std::endl;
	std::cout << std::endl;
	
	Array <unsigned int> unsignedArrayTwo(2);
	unsignedArrayTwo = unsignedArray;
	std::cout <<  "Size is : " << unsignedArrayTwo.getSizeArr() <<  std::endl;
	std::cout <<  "[0] is : " << unsignedArrayTwo[0] <<  std::endl;
	std::cout <<  "[1] is : " << unsignedArrayTwo[1] <<  std::endl;
	std::cout << std::endl;

	Array <unsigned int> outOfRange(5);
	outOfRange[10] = 2;
	} catch (std::exception &exc) { std::cout << "ERROR IS : " << exc.what() << std::endl; }

	return 0;
}