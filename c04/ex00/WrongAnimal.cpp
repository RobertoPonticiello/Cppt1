#include "WrongAnimal.hpp" // Include class definition
WrongAnimal::WrongAnimal() : type("WrongAnimal") // Initialize type
{
    std::cout << "WrongAnimal constructor called" << std::endl; // Constructor log
}
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) // Copy initialize type
{
    std::cout << "WrongAnimal copy constructor called" << std::endl; // Copy constructor log
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) // Copy assignment
{
    std::cout << "WrongAnimal copy assignment called" << std::endl; // Assignment log
    if (this != &other) // Self-assignment guard
    {
        type = other.type; // Copy type
    }
    return *this; // Return *this for chaining
}
WrongAnimal::~WrongAnimal() // Destructor
{
    std::cout << "WrongAnimal destructor called" << std::endl; // Destructor log
}
std::string WrongAnimal::getType() const // Getter for type
{
    return type; // Return stored type
}
void WrongAnimal::makeSound() const // Base wrong sound
{
    std::cout << "WrongAnimal makes a wrong sound" << std::endl; // Wrong sound output
}
