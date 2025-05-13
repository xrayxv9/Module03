#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		FragTrap( void );
		virtual ~FragTrap( void );
		FragTrap( const FragTrap& self);
		FragTrap &operator=( const FragTrap& self);

		void highFiveGuys();

	private:
		bool guarding;
};
