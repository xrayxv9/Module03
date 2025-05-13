#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
    std::cout << "A new ScavTrap has been created he is called " << name << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( void ): ClapTrap()
{
    std::cout << "A new ScavTrap has been created he is called " << name << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& self): ClapTrap(self)
{
	this->guarding = self.guarding;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << this->name << " Quits the arena to go protest !(he is french btw)" << std::endl;	
}

ScavTrap& ScavTrap::operator=( const ScavTrap& self )
{
	if (this != &self)
		this->name = self.name;
	return *this;
}

void ScavTrap::attack( const std::string& target )
{
	if (this->energyPoint && this->hitPoints >= 0)
	{
		std::cout << this->name << " is headshoting " << target << ", causing " << this->attackDamage << " damages !" << std::endl;
		this->energyPoint--;
	}
	else 
		std::cout << "Sorry You couldn't perform this action because "
			<< (this->energyPoint ? "you didn't have enough life" : "you didn't have enough energy") << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout <<  this->name << " is now in gate keeper mode" << std::endl;
	this->guarding = 1;
}
