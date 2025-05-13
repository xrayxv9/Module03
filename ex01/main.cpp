#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
	ScavTrap clap = ScavTrap("Pedro");
	ScavTrap trap = ScavTrap("Marcel");

	std::cout << "HERE IS THE SCAV" << std::endl;
	clap.attack("Marcel");
	clap.takeDamage(8);
	clap.takeDamage(12);
	clap.takeDamage(2);
	clap.beRepaired(9);
	trap.beRepaired(1);
	trap.takeDamage(3);
	trap.beRepaired(12345678);
	for (int i = 0; i < 9; i++)
		trap.attack("a tree");
	trap.guardGate();
}

