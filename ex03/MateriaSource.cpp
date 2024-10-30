#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : index(0){
	for (int i = 0; i < 4 ;i++)
		this->templates[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &m ){
	this->index = m.index;
	for (int i = 0; i < 4 ;i++)
	{
		if (m.templates[i] != NULL)
			this->templates[i] = m.templates[i];
		else
			this->templates[i] = NULL;
	}
}

MateriaSource::~MateriaSource( void ){
	for (int i = 0; i < 4 ;i++)
	{
		if (this->templates[i] != NULL)
			delete this->templates[i];
	}
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &m ){
	this->index =  m.index;
	for (int i = 0; i < 4 ;i++)
	{
		if (this->templates[i] != NULL)
			delete this->templates[i];
		if (m.templates[i] != NULL)
			this->templates[i] = m.templates[i];
		else
			this->templates[i] = NULL;
	}
	return (*this);
}

bool	MateriaSource::materiaExists( std::string const &type ){
	for (int i = 0; i < 4 ;i++)
	{
		if (this->templates[i] != NULL && this->templates[i]->getType() == type)
			return (true);
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
	for (int i = 0; i < 4 ;i++)
	{
		if(this->templates[i]  && this->templates[i]->getType() == type)
			return this->templates[i]->clone();
	}
	return (NULL);
}