#include "WrongCat.hpp" // Include class definition
WrongCat::WrongCat() : WrongAnimal() // Call base constructor
{
    type = "WrongCat"; // Set derived type
    std::cout << "WrongCat constructor called" << std::endl; // Constructor log
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) // Copy base part
{
    std::cout << "WrongCat copy constructor called" << std::endl; // Copy constructor log
}
WrongCat& WrongCat::operator=(const WrongCat& other) // Copy assignment
{
    std::cout << "WrongCat copy assignment called" << std::endl; // Assignment log
    if (this != &other) // Self-assignment guard
    {
        WrongAnimal::operator=(other); // Assign base part
    }
    return *this; // Return *this for chaining
}
WrongCat::~WrongCat() // Destructor
{
    std::cout << "WrongCat destructor called" << std::endl; // Destructor log
}
void WrongCat::makeSound() const // WrongCat sound
{
    std::cout << "WrongCat makes a meow" << std::endl; // WrongCat sound output
}
