#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap	();
		FragTrap	( const FragTrap &other );
		~FragTrap	();
		FragTrap	( std::string newName );

		FragTrap	&operator = (const FragTrap &other);
		void		highFivesGuys ();
};


#endif


// Making Claptraps is probably starting to get on your nerves.
// Now, you will make a FragTrap class that inherits from ClapTrap.

// • Name (Parameter of constructor)
// • Hitpoints (100)
// • Energy points (100)
// • attack damage (30)

// The FragTrap class will have its construction and destruction messages. Also, proper
// construction/destruction chaining must be present (When you build a FragTrap, you
// must start by building a ClapTrap... Destruction is in reverse order), and the tests have
// to show it.
// The specific function for FragTrap will be void highFivesGuys(void) and will display a positive high fives request on the standard output.
// Extend your main function to test everything.
