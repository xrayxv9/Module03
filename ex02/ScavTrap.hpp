#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string name );
		ScavTrap( void );
		virtual ~ScavTrap( void );
		ScavTrap( const ScavTrap& self);
		ScavTrap &operator=( const ScavTrap& self);

		void guardGate( void );
		void attack( const std::string& target );

	private:
		bool guarding;
};
