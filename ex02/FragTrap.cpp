#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl; 
    setName("FragTrap Default");
    setHitPoints(100);
    setAttackDamage(30);
    setEnergyPoints(100);
}


FragTrap::FragTrap(std::string name): ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl; 
    setName(name);
    setAttackDamage(30);
    setHitPoints(100);
    setEnergyPoints(100);
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other.name) {
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "FragTrap " << this->name << " copy constructed!" << std::endl;
}


FragTrap::~FragTrap(){
    std::cout << "FragTrap default destructor called" << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << this->name << " assigned!" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
     std::cout<< "------- Give me High Five!!! -------"<<std::endl;
}

