#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private: 
		AMateria	*templates[4];
		size_t		index;

	bool	materiaExists( std::string const & );

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & );
		MateriaSource  &operator=( MateriaSource const & );
		~MateriaSource( void );

	void		learnMateria( AMateria * );
	AMateria*	createMateria( std::string const & );
};
