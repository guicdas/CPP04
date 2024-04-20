#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain created!\n";
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed!\n";
}

Brain::Brain( const Brain &n ) {
	std::cout << "Brain Copy called!\n";
	*this = n;
}

Brain& Brain::operator=( const Brain &n ) {
	std::cout << "Brain Copy assigment called!\n";

	if ( this != &n )
	{
		for(int i = 0; i < 100 ;i++)
			this->ideas[i] = n.ideas[i];
	}
	return *this;
}
