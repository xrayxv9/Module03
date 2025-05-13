#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
    std::cout << "A new FragTrap has been created he is called " << name << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

FragTrap::FragTrap( void ): ClapTrap()
{
    std::cout << "A new FragTrap has been created he is called " << name << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& self): ClapTrap(self)
{
	this->guarding = self.guarding;
}

FragTrap::~FragTrap( void )
{
	std::cout << this->name << " Doesn't want to fight anymore (he is just a chill guy to be honnest)" << std::endl;	
}

FragTrap& FragTrap::operator=( const FragTrap& self )
{
	if (this != &self)
		this->name = self.name;
	return *this;
}

void FragTrap::highFiveGuys()
{
	std::cout << "Hello guys would you like to high Five with me ?" << std::endl;
}
