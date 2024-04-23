#pragma once

#include <string>
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &n );
		WrongAnimal& operator=( const WrongAnimal &n);
		virtual ~WrongAnimal( void );

	void	makeSound( void ) const;

	std::string getType() const;
};