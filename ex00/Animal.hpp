#pragma once

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string	type;

	public:
		Animal( void );
		Animal( const Animal & );
		Animal& operator=( const Animal & );
		virtual ~Animal( void );

	virtual void	makeSound( void ) const;
	void			printAddress( void ) const;
	std::string		getType( void ) const;
};