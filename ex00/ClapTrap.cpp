#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){

    std::cout << "damage" << attackDamage << std::endl;
}


ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "default constructor called" << std::endl; 
}


ClapTrap::~ClapTrap(){

    std::cout << "default destructor called" << std::endl; 
}


ClapTrap::ClapTrap(ClapTrap &a)
{
    *this = a;
    std::cout << " copied using assignment operator!" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->name          = other.name;
        this->hitPoints     = other.hitPoints;
        this->energyPoints  = other.energyPoints;
        this->attackDamage  = other.attackDamage;
    }
    std::cout << "ClapTrap " << this->name << " assigned!" << std::endl;
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout <<"ClapTrap "  << name << " attacks " << target << " causing " << attackDamage  << " points of damage!" << std::endl;
         --energyPoints;
    }
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0 )
    {
        hitPoints -= amount;
        std::cout << this->name << " taken " << amount << " damage!" <<  std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    
    if (hitPoints > 0 && energyPoints > 0)
    {
        hitPoints += amount;
    }
}
