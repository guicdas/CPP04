#pragma once

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const & );
		WrongCat& operator=( WrongCat const & );
		virtual ~WrongCat( void );

	void	makeSound( void ) const;
};