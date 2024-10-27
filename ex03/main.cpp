#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main( void )
{
	std::cout << std::endl;
	std::cout << "\tTest no existing Materia ->" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* bob = new Character("bob");
		AMateria* tmp = src->createMateria("cure");
		AMateria* tmp2(tmp);
		bob->equip(tmp2);
		tmp = src->createMateria("cure");
		bob->equip(tmp);
		bob->use(0, *bob);
		bob->use(1, *bob);
		delete bob;
		delete src;
	}
	std::cout << std::endl;
	std::cout << "\tUnequip test ->" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* bob = new Character("bob");
		AMateria* tmp = src->createMateria("ice");
		std::cout << (tmp != NULL) << "\n";
		bob->equip(tmp);
		AMateria* tmp2  = src->createMateria("cure");
		bob->equip(tmp2);
		bob->unequip(0);
		bob->equip(tmp);
		ICharacter* bobert = new Character("bobert");
		bob->use(0, *bobert);
		bob->use(3, *bobert);
		delete bobert;
		delete bob;
		delete src;
	}
	std::cout << std::endl;
}
