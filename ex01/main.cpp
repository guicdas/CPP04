#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* D = new Dog();
	const Animal* C = new Cat();

	std::cout << "\n";

	std::cout << D->getType() << std::endl;
	std::cout << C->getType() << " \n\n";

	C->makeSound();
	D->makeSound();

	delete D;
	delete C;

	std::cout << "\n------------------------\n";
	
	const Animal* Do = new Dog();
	const Animal* Do2 = new Dog();

	const Animal* animals[4] = { Do, Do2, new Cat(), new Cat() };
    std::cout << "\n";

	std::cout << &animals[0] << " - " << &Do << "\n";
	std::cout << &animals[1] << " - " << &Do2 << "\n";

	std::cout << "\n";
    for ( int i = 0; i < 4; i++ ) {
        animals[i]->makeSound();
    }
	std::cout << "\n";
	for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
	std::cout << "\n------------------------\n";

	std::string s1;
	std::string s2;
	Animal k = Dog();
	Animal g = k;
	s1 = k.getType();
	s2 = g.getType();
	std::cout << "\noriginal type: " << s1 << "\t&: " << &s1;
	std::cout << "\ncopy type: " << s2 << "\t\t&: " << &s2 << "\n\n";
	k.setType("outro");
	s1 = k.getType();
	s2 = g.getType();
	std::cout << "\noriginal type: " << s1 << "\t&: " << &s1;
	std::cout << "\ncopy type: " << s2 << "\t\t&: " << &s2 << "\n\n";

}
