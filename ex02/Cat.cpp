#include "Cat.hpp"

Cat::Cat( void ) : AAnimal()
{
	std::cout << "Cat created!\n";
	this->type = "Cat";
	this->attribute = new Brain();
}

Cat::Cat( const Cat &n ) {
	std::cout << "Cat Copy called!\n";
	*this = n;
}

Cat& Cat::operator=( const Cat &n ) {
	std::cout << "Cat Copy assigment called!\n";
	if ( this != &n )
	{
		this->type = n.type;
		// this->attribute = n.attribute;
		this->attribute = new Brain( *n.attribute );
	}
	return *this;
}

Cat::~Cat( void ){
	delete this->attribute;
	std::cout << "Cat destroyed!\n";
}

void	Cat::makeSound( void) const{
	std::cout << "Miau!\n";
}