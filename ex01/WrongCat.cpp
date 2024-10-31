#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	std::cout << "WrongCat created!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &n ) : WrongAnimal(n){
	std::cout << "WrongCat Copy called!" << std::endl;
	*this = n;
}

WrongCat& WrongCat::operator=( const WrongCat &n ) {
	std::cout << "WrongCat Copy assigment called!" << std::endl;
	if ( this != &n )
		this->type = n.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destroyed!" << std::endl;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "WrongMiau!" << std::endl;
}