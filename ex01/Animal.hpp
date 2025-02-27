#pragma once

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string	type;

	public:
		Animal( void );
		Animal( Animal const & );
		Animal& operator=( Animal const & );
		virtual ~Animal( void );

	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;
	void			setType( std::string );
	void			printAddress( void ) const;
};