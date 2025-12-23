#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie heapZ(name);
    heapZ.announce();
}