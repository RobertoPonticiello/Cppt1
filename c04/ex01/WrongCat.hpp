#ifndef WRONGCAT_HPP // Include guard start
#define WRONGCAT_HPP // Include guard define
#include "WrongAnimal.hpp" // Base class include
class WrongCat : public WrongAnimal // WrongCat derives from WrongAnimal
{
public:
    WrongCat(); // Default constructor
    WrongCat(const WrongCat& other); // Copy constructor
    WrongCat& operator=(const WrongCat& other); // Copy assignment
    virtual ~WrongCat(); // Destructor
    void makeSound() const; // Hides base non-virtual method
};
#endif // Include guard end
