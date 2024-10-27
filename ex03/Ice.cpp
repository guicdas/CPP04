#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const &i) : AMateria("ice"){
	(void) i;
}

Ice	&Ice::operator=( Ice const &i ){
	(void) i;
	return (*this);
}

Ice::~Ice( void ) {}

AMateria	*Ice::clone( void ) const{
	return (new Ice());
}

void	Ice::use( ICharacter &target ){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;	
}