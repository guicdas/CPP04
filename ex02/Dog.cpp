#include "Dog.hpp"

Dog::Dog( void ) : AAnimal()
{
	std::cout << "Dog created!\n";
	this->type = "Dog";
	this->attribute = new Brain();
}

Dog::Dog( const Dog &n ) {
	std::cout << "Dog Copy called!\n";
	*this = n;
}

Dog& Dog::operator=( const Dog &n ) {
	std::cout << "Dog Copy assigment called!\n";
	if ( this != &n )
	{
		this->type = n.type;
		// this->attribute = n.attribute;
		this->attribute = new Brain( *n.attribute );
	}
	return *this;
}

Dog::~Dog( void ){
	delete this->attribute;
	std::cout << "Dog destroyed!\n";
}

void	Dog::makeSound( void ) const{
	std::cout << "Woof Woof!\n";
}