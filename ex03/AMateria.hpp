#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	
	public:
		AMateria( void );
		AMateria( std::string const & );
		AMateria( AMateria const & );
		AMateria &operator=( AMateria const & );
		virtual ~AMateria( void );
		
	std::string const & getType( void ) const;
	virtual AMateria *clone( void ) const = 0;
	virtual void	use( ICharacter & );

};
