#pragma once

#include <string>
#include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain( const Brain &n );
		Brain& operator=( const Brain &n);
		~Brain( void );

};