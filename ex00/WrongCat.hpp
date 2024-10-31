#pragma once

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat & );
		WrongCat& operator=( const WrongCat & );
		virtual ~WrongCat( void );

	void	makeSound( void ) const;
};