#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( Ice const & );
		Ice &operator=( Ice const & );
		~Ice( void );

		AMateria *clone( void ) const;
		void	use( ICharacter& );
};
