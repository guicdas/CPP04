#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat created!\n";
	this->type = "Cat";
	this->attribute = new Brain();
}

Cat::Cat( const Cat &n ) : Animal(n)
{
	std::cout << "Cat Copy called!\n";
	attribute = new Brain(*n.attribute);
}

Cat& Cat::operator=( const Cat &n ) {
	std::cout << "Cat Copy assigment called!\n";
	if ( this != &n )
	{
		this->type = n.type;
		if(attribute)
			delete this->attribute;
		this->attribute = new Brain( *n.getBrain() );
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

Brain* Cat::getBrain( void ) const{
	return (this->attribute);
}
