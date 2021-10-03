#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"





int		main(){
	PresidentialPardonForm	President("Mr.President");
	RobotomyRequestForm		Robot("ROBO");
	ShrubberyCreationForm	Shrub("Kek");

	Bureaucrat Putin("Putin", 1);
	Bureaucrat Navalny("Navalny", 150);
	Bureaucrat Shulman("Shulman", 50);	
		
	try {	
		std::cout << President;
		President.beSigned(Putin);
		Putin.executeForm(President);		
		President.beSigned(Navalny);
	} catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }
	
	std::cout << std::endl;
	try {
		std::cout << Robot;
		Robot.beSigned(Shulman);
		Putin.executeForm(Robot);
		Shulman.executeForm(Robot);
	} catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }
	
	std::cout << std::endl;
	try {
		std::cout << Shrub;
		Shrub.beSigned(Shulman);
		Shulman.executeForm(Shrub);		
	} catch (std::exception &exc) { std::cout << "ERROR IS: " << exc.what() << std::endl; }
	std::cout << std::endl;

	return 0;
}













// int main () {
// 	ShrubberyCreationForm	lol("TreeMonster");
// 	RobotomyRequestForm		rob("Mrs. Catty");
// 	PresidentialPardonForm	trump("Lanistar");
	

// 	std::cout << "-------------------------------------------" << std::endl;
// 	std::cout << "Target: " << lol.getShrubberyTarget() << std::endl;
// 	std::cout << "To sign: " << lol.getGradeToSign() << std::endl;
// 	std::cout << "To exe: " << lol.getGradeToExe() << std::endl;
// 	std::cout << "Form name: " << lol.getName() << std::endl;
// 	lol.action();
// 	std::cout << "-------------------------------------------" << std::endl;



// 	std::cout << "Target: " << rob.getRobotomyTarget() << std::endl;
// 	std::cout << "To sign: " << rob.getGradeToSign() << std::endl;
// 	std::cout << "To exe: " << rob.getGradeToExe() << std::endl;
// 	std::cout << "Form name: " << rob.getName() << std::endl;
// 	rob.action();
// 	std::cout << "-------------------------------------------" << std::endl;


// 	std::cout << "Target: " << trump.getPresidentialTarget() << std::endl;
// 	std::cout << "To sign: " << trump.getGradeToSign() << std::endl;
// 	std::cout << "To exe: " << trump.getGradeToExe() << std::endl;
// 	std::cout << "Form name: " << trump.getName() << std::endl;
// 	trump.action();
// 	std::cout << "-------------------------------------------" << std::endl;


// 	RobotomyRequestForm kek(rob);

// 	std::cout << "Target: " << kek.getRobotomyTarget() << std::endl;
// 	std::cout << "To sign: " << kek.getGradeToSign() << std::endl;
// 	std::cout << "To exe: " << kek.getGradeToExe() << std::endl;
// 	std::cout << "Form name: " << kek.getName() << std::endl;
// 	kek.action();
// 	std::cout << "-------------------------------------------" << std::endl;

// 	// std::cout << "-------------------------------------------" << std::endl;


	
// 	return 0;
// }