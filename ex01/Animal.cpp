#include "Animal.hpp"

Animal::Animal( void ) : type("Animal"){
	std::cout << "Animal created!" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed!" << std::endl;
}

Animal::Animal( const Animal &n ) {
	std::cout << "Animal Copy called!" << std::endl;
	*this = n;
}

Animal& Animal::operator=( const Animal &n ) {
	std::cout << "Animal Copy assigment called!" << std::endl;
	if ( this != &n )
		this->type = n.type;
	return *this;
}

void	Animal::makeSound( void ) const{
	std::cout << "AHHHHHHHH!" << std::endl;
}

std::string	Animal::getType( void ) const{
	return (this->type);
}

void	Animal::setType( std::string str ){
	this->type = str;
}

void	Animal::printAddress( void ) const{
	std::cout << "Address: " << this << std::endl;
}