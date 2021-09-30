#include "Bureaucrat.hpp"

int main () {

	Bureaucrat bob("Marry", 67);

	Bureaucrat lol("Garry", 78);



	Bureaucrat lol1(bob);

	std::cout << bob.getName() << std::endl;
	std::cout << bob.getGrade() << std::endl;

	std::cout << lol.getName() << std::endl;
	std::cout << lol.getGrade() << std::endl;

	bob.decGrade();
	std::cout << bob.getGrade() << std::endl;

	bob.decGrade();
	std::cout << bob.getGrade() << std::endl;

	bob.incGrade();
	std::cout << bob.getGrade() << std::endl;

	return 0;
}
