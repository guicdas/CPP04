#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*attribute;

	public:
		Dog( void );
		Dog( const Dog & );
		Dog& operator=( const Dog & );
		~Dog( void );
		
	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;
};