#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

	std::cout << "\n-*-*-*-*__INICIALIZATION__*-*-*-*-\n" << std::endl;

	unsigned int	buff = 10;
	Animal			*animals[buff];
	unsigned int	i = 0;

	while (i < (buff / 2)) {
		animals[i++] = new Cat();
	}
	while (i < buff) {
		animals[i++] = new Dog();
	}

	std::cout << "\n-*-*-*-*__END_OF_INIT__*-*-*-*-\n" << std::endl;

	i = 0;


	std::cout << "\n-*-*-*-*__makeSOUND__*-*-*-*-\n" << std::endl;


	while (i < buff) {
		animals[i++]->makeSound();
	}

	std::cout << "\n-*-*-*-*__END_OF_makeSOUND__*-*-*-*-\n" << std::endl;



	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->setCatIdea("Am I a cat?");
	cat->showCatIdea();

	std::cout << "\n" << std::endl;

	dog->setDogIdea("Am I a dog?");
	dog->showDogIdea();

	Cat cat1;

	cat1.setCatIdea("I'm Max");
	cat1.showCatIdea();

	Cat cat2(cat1);

	cat2.showCatIdea();


	for(int i = 0; i < 10; ++i)
			delete animals[i];
		return (0);
}
