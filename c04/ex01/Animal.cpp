#include "Animal.hpp" // Include class definition
Animal::Animal() : type("Animal") // Initialize type
{
    std::cout << "Animal constructor called" << std::endl; // Constructor log
}
Animal::Animal(const Animal& other) : type(other.type) // Copy initialize type
{
    std::cout << "Animal copy constructor called" << std::endl; // Copy constructor log
}
Animal& Animal::operator=(const Animal& other) // Copy assignment
{
    std::cout << "Animal copy assignment called" << std::endl; // Assignment log
    if (this != &other) // Self-assignment guard
    {
        type = other.type; // Copy type
    }
    return *this; // Return *this for chaining
}
Animal::~Animal() // Destructor
{
    std::cout << "Animal destructor called" << std::endl; // Destructor log
}
std::string Animal::getType() const // Getter for type
{
    return type; // Return stored type
}
void Animal::makeSound() const // Base sound
{
    std::cout << "Animal makes a generic sound" << std::endl; // Base sound output
}
