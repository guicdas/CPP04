#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal"){
	std::cout << "WrongAnimal created!\n";
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destroyed!\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &n ) {
	std::cout << "WrongAnimal Copy called!\n";
	*this = n;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &n ) {
	std::cout << "WrongAnimal Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << "I am a Wrong animal!\n";
}

std::string	WrongAnimal::getType( void ) const{
	return (this->type);
}