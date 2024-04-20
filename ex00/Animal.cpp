#include "Animal.hpp"

Animal::Animal( void ) : type("Animal"){
	std::cout << "Animal created!\n";
}

Animal::Animal( const Animal &n ) {
	std::cout << "Animal Copy called!\n";
	*this = n;
}

Animal& Animal::operator=( const Animal &n ) {
	std::cout << "Animal Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal destroyed!\n";
}

void	Animal::makeSound( void ) const{
	std::cout << "AHHHHHHHH!\n";
}

std::string	Animal::getType( void ) const{
	return (this->type);
}