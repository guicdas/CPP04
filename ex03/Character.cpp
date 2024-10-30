#include "Character.hpp"

Character::Character( void ) : name(""){
	for (int i = 0; i < 4 ;i++)
		this->inventory[i] = NULL;
}

Character::Character( std::string name ) : name(name){
	for (int i = 0; i < 4 ;i++)
		this->inventory[i] = NULL;
}

Character::Character( Character const &copy ){
	for (int i = 0; i < 4 ;i++)
	{
		if (copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = copy.name;
}

Character	&Character::operator=( Character const &c ){
	if (this == &c)
		return (*this);
	for (int i = 0; i < 4 ;i++)
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
	for (int i = 0; i < 4 ;i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

std::string const &Character::getName( void ) const{
	return (this->name);
}

void	Character::equip( AMateria *m ){
	if (m == NULL)
		std::cout << "ERROR: NULL Materia!" << std::endl;
	for (int i = 0; i < 4 ;i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "ERROR: " << this->getName() << "'s inventory is already full!" << std::endl;
}

void	Character::unequip(int index ){
	if (index < 0 || index >= 4)
		std::cout << "ERROR: invalid inventory index!" << std::endl;
	else if (this->inventory[index] != NULL)
		this->inventory[index] = NULL;
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
