#include "ScavTrap.hpp"

int main () {

    ScavTrap player_1("Jessy Pinkman");
    ClapTrap player_2("CJ");

    player_1.guardGate();

    player_2.attack("Stone");
    
    player_1.attack("Elephant");



    // ScavTrap player_SC("Jonny");
    // ClapTrap player_CL("Garry");

    // ptr = &player_SC;

    // ptr->attack("TreeMonster");
    // ptr->takeDamage(3);
    // ptr->beRepaired(2);

    // ptr->guardGate();
    
    // ptr = &player_CL;

    // ptr->attack("Mirmaid");
    // ptr->takeDamage(3);
    // ptr->beRepaired(2);
    
    // ScavTrap player_g (player_CL);






    return 0;
}