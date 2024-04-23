#pragma once

#include <string>
#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal( void );
		AAnimal( const AAnimal &n );
		AAnimal& operator=( const AAnimal &n);
		virtual ~AAnimal( void );

	virtual void	makeSound( void ) const = 0;

	std::string getType( void ) const;
	void	setType(std::string str);
	void	printAddress( void ) const;
};