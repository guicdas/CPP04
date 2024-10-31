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
		Dog( Dog const & );
		Dog& operator=( Dog const & );
		~Dog( void );
		
	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;
};