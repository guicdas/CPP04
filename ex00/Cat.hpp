#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat &n );
		Cat& operator=( const Cat &n );
		~Cat( void );

	virtual void	makeSound( void ) const;
};