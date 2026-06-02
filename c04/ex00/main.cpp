#include "Animal.hpp" // Animal base class
#include "Dog.hpp" // Dog class
#include "Cat.hpp" // Cat class
#include "WrongAnimal.hpp" // WrongAnimal base class
#include "WrongCat.hpp" // WrongCat class
#include <iostream> // std::cout, std::endl
int main() // Program entry point
{
    const Animal* meta = new Animal(); // Base Animal instance
    const Animal* j = new Dog(); // Dog as Animal
    const Animal* i = new Cat(); // Cat as Animal
    std::cout << j->getType() << " " << std::endl; // Print Dog type
    std::cout << i->getType() << " " << std::endl; // Print Cat type
    i->makeSound(); // Should call Cat::makeSound
    j->makeSound(); // Should call Dog::makeSound
    meta->makeSound(); // Should call Animal::makeSound
    delete meta; // Delete Animal
    delete j; // Delete Dog via base pointer
    delete i; // Delete Cat via base pointer
    std::cout << "--- Extra polymorphism tests ---" << std::endl; // Separator output
    Dog dogOnStack; // Stack Dog
    Cat catOnStack; // Stack Cat
    Animal* aPtr = &dogOnStack; // Base pointer to Dog
    Animal* bPtr = &catOnStack; // Base pointer to Cat
    aPtr->makeSound(); // Should call Dog::makeSound
    bPtr->makeSound(); // Should call Cat::makeSound
    std::cout << "--- WrongAnimal tests ---" << std::endl; // Separator output
    WrongAnimal wrongBase; // Stack WrongAnimal
    WrongCat wrongDerived; // Stack WrongCat
    WrongAnimal* wrongPtr = &wrongDerived; // Base pointer to WrongCat
    wrongBase.makeSound(); // Calls WrongAnimal::makeSound
    wrongDerived.makeSound(); // Calls WrongCat::makeSound
    wrongPtr->makeSound(); // Calls WrongAnimal::makeSound due to no virtual
    return 0; // Exit status
}
