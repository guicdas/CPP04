#include "WrongCat.hpp"

WrongCat::WrongCat( void ) :WrongAnimal(){
	std::cout << "WrongCat created!\n";
	this->type = "WrongCat";
}

void	WrongCat::makeSound( void) const{
	std::cout << "Miau!\n";
}