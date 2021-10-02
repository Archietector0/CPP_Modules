#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"



int main () {
	ShrubberyCreationForm	lol("TreeMonster");
	RobotomyRequestForm		rob("Mrs. Catty");

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Target: " << lol.getShrubberyTarget() << std::endl;
	std::cout << "To sign: " << lol.getGradeToSign() << std::endl;
	std::cout << "To exe: " << lol.getGradeToExe() << std::endl;
	std::cout << "Form name: " << lol.getName() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	lol.action();


	// std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Target: " << rob.getRobotomyTarget() << std::endl;
	std::cout << "To sign: " << rob.getGradeToSign() << std::endl;
	std::cout << "To exe: " << rob.getGradeToExe() << std::endl;
	std::cout << "Form name: " << rob.getName() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	rob.action();





	
	return 0;
}