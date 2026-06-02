#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
    ClapTrap a("ClapTrap A");
    ClapTrap b("ClapTrap B");

    a.attack("ClapTrap B");
    b.takeDamage(3);
    b.beRepaired(5);

    {
        ScavTrap c("ScavTrap C");
        FragTrap d("FragTrap D");

        c.attack("ClapTrap A");
        c.guardGate();
        d.attack("ClapTrap B");
        d.highFivesGuys();
    }
}
