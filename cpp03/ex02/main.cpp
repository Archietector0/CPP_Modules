#include "FragTrap.hpp"

int main () {

	FragTrap a ("Marry");

	a.setName("Lolla");
	a.setHitpoints(43);
	a.setEnergyPoints(42);
	a.setAttackDamage(41);

	FragTrap v (a) ;

	v.attack("Bear");
	v.beRepaired(21);
	v.takeDamage(15);

	v.highFivesGuys();


}
