#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap a("ClapTrap A");
    ClapTrap b("ClapTrap B");

    a.attack("ClapTrap B");
    b.takeDamage(3);
    b.beRepaired(5);
}