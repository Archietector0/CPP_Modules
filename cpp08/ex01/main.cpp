#include "span.hpp"

int main()
{
	Span span(12);

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~__USING_SIMPLE_ADDING__~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	for (unsigned int i = 0; i < span.getSize(); ++i) {
		span.addNumber(-20 + i * 3);
	}

	span.printArray();

	std::cout << "\nLongest span: " << span.longestSpan() << std::endl;
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;


	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~__USING_ITERATOR_ADDING__~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;


	Span it_span(10);

	std::vector<int> someVector;

	for (int k = 0; k < 10; ++k) {
		someVector.push_back(-23 + k * 6);
	}

	try {
		it_span.addNumber(someVector.begin(), someVector.end());
		it_span.printArray();

		std::cout << "\nLongest span: " << it_span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << it_span.shortestSpan() << std::endl;

	} catch (std::string ex) {
		std::cout << ex << std::endl;
	}

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~__USING_ONLY_ONE_PARAM__~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	Span onlyOne(1);
	try {
		std::cout << "\nLongest span: " << onlyOne.longestSpan() << std::endl;
		std::cout << "Shortest span: " << onlyOne.shortestSpan() << std::endl;
	} catch (std::string ex1) {
		std::cout << ex1 << std::endl;
	}





}