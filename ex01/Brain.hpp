#pragma once

#include <string>
#include <iostream>

class Brain{
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		Brain( const Brain & );
		Brain& operator=( const Brain & );
		~Brain( void );

	std::string const	*getIdeas( void ) const;
	void				setIdeas( std::string );
};