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
		Cat( Cat const & );
		Cat& operator=( Cat const & );
		~Cat( void );

	void	makeSound( void ) const;
	Brain	*getBrain( void ) const;
};