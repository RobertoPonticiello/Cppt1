#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal*	animals[4];

	std::cout << "--- Abstract Animal polymorphism tests ---" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "--- Deep copy tests ---" << std::endl;
	Dog	dog;
	dog.setIdea(0, "Chase the postman");
	Dog	copiedDog(dog);
	dog.setIdea(0, "Guard the house");
	std::cout << "Original Dog idea: " << dog.getIdea(0) << std::endl;
	std::cout << "Copied Dog idea: " << copiedDog.getIdea(0) << std::endl;

	Cat	cat;
	cat.setIdea(0, "Sleep on the keyboard");
	Cat	assignedCat;
	assignedCat = cat;
	cat.setIdea(0, "Knock a glass off the table");
	std::cout << "Original Cat idea: " << cat.getIdea(0) << std::endl;
	std::cout << "Assigned Cat idea: " << assignedCat.getIdea(0) << std::endl;

	std::cout << "--- WrongAnimal tests ---" << std::endl;
	WrongAnimal	wrongBase;
	WrongCat	wrongDerived;
	WrongAnimal*	wrongPtr = &wrongDerived;
	wrongBase.makeSound();
	wrongDerived.makeSound();
	wrongPtr->makeSound();

	return (0);
}
