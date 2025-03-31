#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap clap = ClapTrap("Pedro");
	ClapTrap trap = ClapTrap("Marcel");

	clap.attack("Marcel");
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	clap.takeDamage(8);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	clap.takeDamage(12);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	clap.takeDamage(2);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	clap.beRepaired(9);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	trap.beRepaired(1);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	trap.takeDamage(3);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	trap.beRepaired(12345678);
	std::cout << clap << std::endl;
	std::cout << trap << std::endl;
	for (int i = 0; i < 9; i++)
	{
		trap.attack("a tree");
		std::cout << trap << std::endl;
	}
}

