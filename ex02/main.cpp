#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{
	ScavTrap clap = ScavTrap("Pedro");
	ClapTrap trap = ClapTrap("Marcel");
	FragTrap chill = FragTrap("the chill guy");

	std::cout << "HERE IS THE CLAPTRAP" << std::endl;
	clap.attack("Marcel");
	clap.takeDamage(8);
	clap.takeDamage(12);
	clap.takeDamage(2);
	clap.beRepaired(9);
	clap.guardGate();
	std::cout << "HERE IS THE SCAVTRAP" << std::endl;
	trap.beRepaired(1);
	trap.takeDamage(3);
	trap.beRepaired(12345678);
	for (int i = 0; i < 9; i++)
		trap.attack("a tree");
	std::cout << "HERE IS THE FRAGTRAP" << std::endl;
	chill.attack("no one");
	chill.highFiveGuys();
}

