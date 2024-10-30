#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( Cure const & );
		Cure &operator=( Cure const & );
		~Cure( void );

	AMateria *clone( void ) const;
	void	use( ICharacter & );
};