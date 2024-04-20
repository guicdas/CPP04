#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal"){
	std::cout << "AAnimal created!\n";
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destroyed!\n";
}

AAnimal::AAnimal( const AAnimal &n ) {
	std::cout << "AAnimal Copy called!\n";
	*this = n;
}

AAnimal& AAnimal::operator=( const AAnimal &n ) {
	std::cout << "AAnimal Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

void	AAnimal::makeSound( void ) const{
	std::cout << "AHHHHHHHH!\n";
}

std::string	AAnimal::getType( void ) const{
	return (this->type);
}