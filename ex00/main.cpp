#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n";
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << " \n\n";

	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << "\n";
	delete j;
	delete i;
	delete meta;

	std::cout << "\n------------------------\n";

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << "\n";
	std::cout << WrongMeta->getType() << std::endl;
	std::cout << k->getType() << "\n\n";

	WrongMeta->makeSound();
	k->makeSound(); //will output the animal sound!
	std::cout << std::endl;

	delete WrongMeta;
	delete k;

	return 0;
}