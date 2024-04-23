#pragma once

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat &n );
		WrongCat& operator=( const WrongCat &n);
		virtual ~WrongCat( void );

	void	makeSound( void ) const;
};