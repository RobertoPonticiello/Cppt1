#ifndef CAT_HPP // Include guard start
#define CAT_HPP // Include guard define
#include "Animal.hpp" // Base class include
class Cat : public Animal // Cat derives from Animal
{
public:
    Cat(); // Default constructor
    Cat(const Cat& other); // Copy constructor
    Cat& operator=(const Cat& other); // Copy assignment
    virtual ~Cat(); // Destructor
    virtual void makeSound() const; // Cat sound override
};
#endif // Include guard end
