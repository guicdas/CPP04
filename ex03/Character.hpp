#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*inventory[4];
		std::string	name;

	public:
		Character( void );
		Character( std::string );
		Character( Character const & );
		Character &operator=( Character const & );
		~Character( void );

	std::string const & getName( void ) const;
	void	equip( AMateria * );
	void	unequip( int );
	void	use( int , ICharacter & );
};
