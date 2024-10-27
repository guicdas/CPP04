#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : index(0){
	size_t	i = 0;

	while (i < 4)
	{
		this->templates[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource( MateriaSource const &m ){
	size_t	i = 0;

	this->index = m.index;
	while (i < 4)
	{
		if (m.templates[i] != NULL)
			//this->templates[i] = m.templates[i]->clone();
			this->templates[i] = m.templates[i];
		else
			this->templates[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource( void ){
	size_t	i = 0;

	while ( i < 4)
	{
		if (this->templates[i] != NULL)
			delete this->templates[i];
		i++;
	}
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &m ){
	size_t	i;

	this->index =  m.index;
	i = 0;
	while (i < 4)
	{
		if (this->templates[i] != NULL)
			delete this->templates[i];
		if (m.templates[i] != NULL)
//			this->templates[i] = m.templates[i]->clone();
			this->templates[i] = m.templates[i];
		else
			this->templates[i] = NULL;
		i++;
	}
	return (*this);
}

bool	MateriaSource::materiaExists( std::string const &type ){
	size_t	i = 0;

	while (i < 4)
	{
		if (this->templates[i] != NULL && this->templates[i]->getType() == type)
			return (true);
		i++;
	}
	return (false);
}

void	MateriaSource::learnMateria( AMateria *materia ){
	if (materia == NULL)
	{
		std::cout << "Error: Materia does not exist!" << std::endl;
		return ;
	}
	if (this->materiaExists(materia->getType()))
		return ;
	if (this->templates[this->index] != NULL)
		delete this->templates[this->index];
	this->templates[this->index] = materia;
	this->index++;
	if (this->index >= 4)
		this->index = 0;
}

AMateria	*MateriaSource::createMateria( std::string const &type ){
	size_t	i;

	i = 0;
	while (i < 4)
	{
		if(this->templates[i]  && this->templates[i]->getType() == type)
			return this->templates[i]->clone();
		i++;
	}
	return (NULL);
}