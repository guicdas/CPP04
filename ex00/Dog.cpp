#include "Dog.hpp"

Dog::Dog( void ) : Animal(){
	std::cout << "Dog created!\n";
	this->type = "Dog";
}

Dog::Dog( const Dog &n ) : Animal(n)
{
	std::cout << "Dog Copy called!\n";
	*this = n;
}

Dog& Dog::operator=( const Dog &n ) {
	std::cout << "Dog Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destroyed!\n";
}

void	Dog::makeSound( void ) const{
	std::cout << "Woof Woof!\n";
}
