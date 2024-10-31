#include "Animal.hpp"

Animal::Animal( void ) : type("Animal"){
	std::cout << "Animal created!" << std::endl;
}

Animal::Animal( const Animal &n ) {
	std::cout << "Animal Copy called!" << std::endl;
	*this = n;
}

Animal& Animal::operator=( const Animal &n ) {
	std::cout << "Animal Copy assigment called!" << std::endl;
	if ( this == &n )
		return (*this);
	this->type = n.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed!" << std::endl;
}

void	Animal::makeSound( void ) const{
	std::cout << "AHHHHHHHH!" << std::endl;
}

std::string	Animal::getType( void ) const{
	return (this->type);
}

void Animal::printAddress( void ) const{
	std::cout << "Address: " << this << std::endl;
}