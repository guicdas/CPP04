#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog & );
		Dog& operator=( const Dog & );
		~Dog( void );

	virtual void	makeSound( void ) const;
};