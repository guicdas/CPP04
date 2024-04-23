#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* attribute;
	public:
		Dog( void );
		Dog( const Dog &n);
		Dog& operator=( const Dog &n);
		~Dog( void );
		
	void	makeSound( void ) const;
	// void	setType(std::string str);
	Brain*	getBrain( void ) const;
};