#include "ClapTrap.hpp"

int main () {
    ClapTrap a ("Kevin");
    ClapTrap b ("John");
    // ClapTrap c (b);

    a.attack ("TreeMonster");
    b.attack ("LollyPop");
    // a.attack ("TreeMonster");

    a.takeDamage (9);
    b.takeDamage (1);

    a.beRepaired(5);
    b.beRepaired(25);


















    return 0;
}
