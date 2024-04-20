#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal();
	// const AAnimal meta = AAnimal();
	const AAnimal* D = new Dog();
	const AAnimal* C = new Cat();

	std::cout << "\n";

	std::cout << D->getType() << std::endl;
	std::cout << C->getType() << " \n\n";

	C->makeSound(); //will output the c sound!
	D->makeSound();

	delete D;
	delete C;
	

	std::cout << "\n------------------------\n";
	
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    	std::cout << "\n";

    for ( int i = 0; i < 4; i++ ) {
        animals[i]->makeSound();
    }
	std::cout << "\n";
	for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
}
