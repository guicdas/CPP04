#pragma once

#include <string>
#include <iostream>

class AAnimal{
	protected:
		std::string	type;

	public:
		AAnimal( void );
		AAnimal( const AAnimal & );
		AAnimal& operator=( const AAnimal & );
		virtual ~AAnimal( void );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
	void			setType( std::string );
	void			printAddress( void ) const;
};