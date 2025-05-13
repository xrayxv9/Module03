#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap( std::string name )
{
	std::cout << name << " Enters into the arena !!" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap( void ) : name("default"), hitPoints(10), energyPoint(10), attackDamage(0)
{
	std::cout << name << " Enters into the arena !!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " Exits the arena after a beautiful fight !" << std::endl;	
}

ClapTrap& ClapTrap::operator=( const ClapTrap& self )
{
	if (this != &self)
		this->name = self.name;
	return *this;
}

ClapTrap::ClapTrap( const ClapTrap& self)
{
	*this = self;
}

// functions
void ClapTrap::attack( const std::string& target )
{
	if (this->energyPoint && this->hitPoints >= 0)
	{
		std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " damages !" << std::endl;
		this->energyPoint--;
	}
	else 
		std::cout << "Sorry You couldn't perform this action because "
			<< (this->energyPoint ? "you didn't have enough life" : "you didn't have enough energy") << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->hitPoints > 0)
	{
		this->hitPoints -= amount;
		if (this->hitPoints > 0)
			std::cout << name << " has taken " << amount << " damages and has " << this->hitPoints << " hp remaining" << std::endl;
		else
			std::cout << "You just killed him !!" << std::endl;
	}
	else
		std::cout << "Why do you keep hitting him ?! HE IS DEAD !!!!! (such a bully..)" << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount )
{
	if (this->energyPoint && this->hitPoints >= 0)
	{
		if (amount >= 10 || this->hitPoints + amount >= 10)
			this->hitPoints = 10;
		else
			this->hitPoints += amount;
		std::cout << "You healed yourself by " << amount << " hp and you now have " << this->hitPoints << " hp" << std::endl;
		this->energyPoint--;
	}
	else 
		std::cout << "Sorry You couldn't perform this action because "
			<< (this->energyPoint ? "you didn't have enough life" : "you didn't have enough energy") << std::endl;
}
