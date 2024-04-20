#pragma once

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const Animal &n );
		Animal& operator=( const Animal &n);
		virtual ~Animal( void );

	virtual void	makeSound( void ) const;

	std::string getType() const;
	void	setType(std::string str);
};