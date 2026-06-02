#ifndef DOG_HPP // Include guard start
#define DOG_HPP // Include guard define
#include "Animal.hpp" // Base class include
class Dog : public Animal // Dog derives from Animal
{
public:
    Dog(); // Default constructor
    Dog(const Dog& other); // Copy constructor
    Dog& operator=(const Dog& other); // Copy assignment
    virtual ~Dog(); // Destructor
    virtual void makeSound() const; // Dog sound override
};
#endif // Include guard end
