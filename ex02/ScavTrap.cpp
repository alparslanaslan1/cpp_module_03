#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl; 
    setName("Scavtrap Default");
    setHitPoints(100);
    setAttackDamage(20);
    setEnergyPoints(50);
}


ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap constructor called" << std::endl; 
    setName(name);
    setAttackDamage(20);
    setHitPoints(100);
    setEnergyPoints(50);
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other.name) {
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    std::cout << "ScavTrap " << this->name << " copy constructed!" << std::endl;
}


ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap default destructor called" << std::endl; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    
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


void ScavTrap::guardGate(){
    std::cout << "Guard Gate is here!" <<std::endl;
}
