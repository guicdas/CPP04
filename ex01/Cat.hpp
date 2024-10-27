#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*attribute;

	public:
		Cat( void );
		Cat( const Cat & );
		Cat& operator=( const Cat & );
		~Cat( void );

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;
};