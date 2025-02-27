#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( Cat const & );
		Cat& operator=( Cat const & );
		~Cat( void );

	virtual void	makeSound( void ) const;
};