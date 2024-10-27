#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const &c ) : AMateria("cure"){
	(void) c;
}

Cure &Cure::operator=( Cure const &c ){
	(void) c;
	return (*this);
}

Cure::~Cure( void ) {}

AMateria	*Cure::clone( void ) const{
	return (new Cure());
}

void	Cure::use( ICharacter &target ){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}