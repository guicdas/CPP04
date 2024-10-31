#pragma once

#include <string>
#include <iostream>

class WrongAnimal{
	protected:
		std::string	type;

	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & );
		WrongAnimal& operator=( WrongAnimal const & );
		virtual ~WrongAnimal( void );

	void		makeSound( void ) const;
	std::string	getType( void ) const;
};