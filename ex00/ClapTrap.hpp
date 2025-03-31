#pragma once

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &self );
		ClapTrap &operator=( const ClapTrap& self );

		void print( std::ostream& o ) const;	

		//functions
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );


	private:
		std::string name;
		int			hitPoints;
		int			energyPoint;
		int			attackDamage;
};


std::ostream& operator<<( std::ostream& o, ClapTrap const& self);

