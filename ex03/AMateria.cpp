#include "AMateria.hpp"

AMateria::AMateria( void ) : type(NULL) {}

AMateria::AMateria( std::string const &t ) : type(t) {}

AMateria::AMateria( AMateria const &t ){
	*this = t;
}

AMateria &AMateria::operator=( AMateria const &t ){
	if (this == &t)
		return (*this);
	this->type = t.type;
	return (*this);
}

AMateria::~AMateria( void ) {}

std::string const & AMateria::getType( void ) const{
	return (this->type);
}

void	AMateria::use( ICharacter &target ){
	(void) target;
}
