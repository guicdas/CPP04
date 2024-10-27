#pragma once

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* attribute;

	public:
		Dog( void );
		Dog( const Dog &n);
		Dog& operator=( const Dog &n);
		~Dog( void );
		
	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;
};