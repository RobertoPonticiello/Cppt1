#include "Cat.hpp" // Include class definition
Cat::Cat() : Animal() // Call base constructor
{
    type = "Cat"; // Set derived type
    std::cout << "Cat constructor called" << std::endl; // Constructor log
}
Cat::Cat(const Cat& other) : Animal(other) // Copy base part
{
    std::cout << "Cat copy constructor called" << std::endl; // Copy constructor log
}
Cat& Cat::operator=(const Cat& other) // Copy assignment
{
    std::cout << "Cat copy assignment called" << std::endl; // Assignment log
    if (this != &other) // Self-assignment guard
    {
        Animal::operator=(other); // Assign base part
    }
    return *this; // Return *this for chaining
}
Cat::~Cat() // Destructor
{
    std::cout << "Cat destructor called" << std::endl; // Destructor log
}
void Cat::makeSound() const // Cat sound
{
    std::cout << "Meow" << std::endl; // Cat sound output
}
