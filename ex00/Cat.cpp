#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat created!\n";
	this->type = "Cat";
}

Cat::Cat( const Cat &n ) {
	std::cout << "Cat Copy called!\n";
	*this = n;
}

Cat& Cat::operator=( const Cat &n ) {
	std::cout << "Cat Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destroyed!\n";
}

void	Cat::makeSound( void) const{
	std::cout << "Miau!\n";
}