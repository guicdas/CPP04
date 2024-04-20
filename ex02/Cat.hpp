#pragma once

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* attribute;
	public:
		Cat( void );
		Cat( const Cat &n);
		Cat& operator=( const Cat &n);
		~Cat( void );

	void	makeSound( void ) const;
};