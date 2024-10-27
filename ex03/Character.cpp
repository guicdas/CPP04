#include "Character.hpp"

Character::Character( void ) : name(""){
	int	i = 0;

	while ( i < 4 )
	{
		this->inventory[i] = NULL;
		i++;
	}
}

Character::Character( std::string name ) : name(name){
	int i = 0;

	while ( i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
}

Character::Character( Character const &copy ){
	int	i = 0;

	while (i < 4)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = copy.name;
}

Character	&Character::operator=( Character const &c ){
	int	i = 0;

	if (this == &c)
		return (*this);
	while (i < 4)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		if (c.inventory[i] != NULL)
			this->inventory[i] = c.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = c.name;
	return (*this);
}

Character::~Character( void ){
	int	i = 0;

	while (i < 4)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		i++;
	}
}

std::string const &Character::getName( void ) const{
	return (this->name);
}

void	Character::equip( AMateria *m ){
	int	i = 0;
	if (m == NULL)
		std::cout << "ERROR: NULL Materia!" << std::endl;
	while ( i < 4 )
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "ERROR: " << this->getName() << "'s inventory is already full!" << std::endl;
}

void	Character::unequip(int index ){
	if (index < 0 || index >= 4)
		std::cout << "ERROR: invalid inventory index!" << std::endl;
	else if (this->inventory[index] != NULL)
	{
		this->inventory[index] = NULL;
	}
	else
		std::cout << "ERROR: " << this->getName() << "'s inventory is empty!" << std::endl;
}

void	Character::use( int index, ICharacter& target ){
	if (index < 0 || index >= 4 )
		std::cout << "ERROR: Invalid inventory index!" << std::endl;	
	else if (this->inventory[index] == NULL)
		std::cout << "ERROR: NULL position in " << this->getName() << "'s inventory!" << std::endl;
	else
		this->inventory[index]->use(target);
}
