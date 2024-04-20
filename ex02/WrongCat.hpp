#pragma once

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	public:
		WrongCat( void );

	void	makeSound( void ) const;
};