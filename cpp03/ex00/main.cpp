#include "ClapTrap.hpp"

int main () {

	ClapTrap a ( "Harry" );

	a.setAttackDamage(25);
	// a.setEnergyPoints();
	a.setHitpoints(100);

	ClapTrap b (a);

	a.attack( "Tree" );
	a.takeDamage( 43 );
	a.beRepaired( 25 );
}
