#include "Dog.hpp" // Include class definition
Dog::Dog() : Animal() // Call base constructor
{
    type = "Dog"; // Set derived type
    std::cout << "Dog constructor called" << std::endl; // Constructor log
}
Dog::Dog(const Dog& other) : Animal(other) // Copy base part
{
    std::cout << "Dog copy constructor called" << std::endl; // Copy constructor log
}
Dog& Dog::operator=(const Dog& other) // Copy assignment
{
    std::cout << "Dog copy assignment called" << std::endl; // Assignment log
    if (this != &other) // Self-assignment guard
    {
        Animal::operator=(other); // Assign base part
    }
    return *this; // Return *this for chaining
}
Dog::~Dog() // Destructor
{
    std::cout << "Dog destructor called" << std::endl; // Destructor log
}
void Dog::makeSound() const // Dog sound
{
    std::cout << "Woof" << std::endl; // Dog sound output
}
