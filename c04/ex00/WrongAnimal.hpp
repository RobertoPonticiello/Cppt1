#ifndef WRONGANIMAL_HPP // Include guard start
#define WRONGANIMAL_HPP // Include guard define
#include <string> // std::string
#include <iostream> // std::cout, std::endl
class WrongAnimal // Base class without proper polymorphism
{
protected:
    std::string type; // Wrong animal type name
public:
    WrongAnimal(); // Default constructor
    WrongAnimal(const WrongAnimal& other); // Copy constructor
    WrongAnimal& operator=(const WrongAnimal& other); // Copy assignment
    virtual ~WrongAnimal(); // Destructor
    std::string getType() const; // Accessor for type
    void makeSound() const; // Non-virtual sound method
};
#endif // Include guard end
