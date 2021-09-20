#include <string>
#include <iostream>

int main () {
	std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Указатель на переменную 'string': " << stringPTR << std::endl;
	std::cout << "Ссылка на переменную    'string': " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Указатель на переменную 'string': " << *stringPTR << std::endl;
	std::cout << "Ссылка на переменную    'string': " << stringREF << std::endl;
}
