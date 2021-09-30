#include "Bureaucrat.hpp"

int		main(){
	try{
		Bureaucrat Marry("Marry", 1);
		std::cout << Marry;
		Marry.incGrade();
	}
	catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }

	std::cout << std::endl;

	try {
		Bureaucrat Garry("Garry", 150);
		std::cout << Garry;
		Garry.decGrade();
	}
	catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }

	std::cout << std::endl;

	try {
		Bureaucrat Barry("Barry", 50);
		std::cout << Barry;
	}
	catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }
}
