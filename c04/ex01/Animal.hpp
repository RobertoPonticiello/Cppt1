#ifndef ANIMAL_HPP // Include guard start
#define ANIMAL_HPP // Include guard define
#include <string> // std::string
#include <iostream> // std::cout, std::endl
class Animal // Base class for animals
{
protected:
    std::string type; // Animal type name
public:
    Animal(); // Default constructor
    Animal(const Animal& other); // Copy constructor
    Animal& operator=(const Animal& other); // Copy assignment
    virtual ~Animal(); // Virtual destructor for polymorphic base
    std::string getType() const; // Accessor for type
    virtual void makeSound() const; // Polymorphic sound
};
#endif // Include guard end
