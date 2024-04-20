#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog &n );
		Dog& operator=( const Dog &n);
		~Dog( void );

	virtual void	makeSound( void ) const;
};