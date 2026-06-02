#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name
              << " requests a positive high five."
              << std::endl;
}
