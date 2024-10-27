#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	std::cout << "WrongCat created!\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &n ) : WrongAnimal(n){
	std::cout << "WrongCat Copy called!\n";
	*this = n;
}

WrongCat& WrongCat::operator=( const WrongCat &n ) {
	std::cout << "WrongCat Copy assigment called!\n";
	if ( this != &n )
		this->type = n.type;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destroyed!\n";
}

void	WrongCat::makeSound( void) const{
	std::cout << "WrongMiau!\n";
}