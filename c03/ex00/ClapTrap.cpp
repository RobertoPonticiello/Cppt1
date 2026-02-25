#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap constructor" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    _energyPoints--;
    std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    std::cout << _name << " take " << amount << " points of damage, leaving him with " << _hitPoints << " health points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _energyPoints--;
    _hitPoints += amount;
    std::cout << _name << " repaired of " << amount << " hit points!" << std::endl;
}