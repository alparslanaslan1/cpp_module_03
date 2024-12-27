#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("xxx"), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "constructor called" << std::endl; 
    
}

ClapTrap::~ClapTrap(){
    std::cout << "default destructor called" << std::endl; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    
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

void ClapTrap::attack(const std::string& target){
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout <<"ClapTrap "  << name << " attacks " << target << " causing " << attackDamage  << " points of damage!" << std::endl;
        --energyPoints;
    }
    if (energyPoints == 0)
    {
        std::cout << "Energy exhausted" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){

    if (hitPoints > 0)
    {
        hitPoints -= amount;
        std::cout << this->name << " taken " << amount << " damage!" <<  std::endl;

    }
}

void ClapTrap::beRepaired(unsigned int amount){

    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << this->name << " be repaired himself " << amount << " HP!" << std::endl;
        hitPoints += amount;
        energyPoints--;
    }
}

void ClapTrap::setName(const std::string name){
    this->name = name;
}
void ClapTrap::setHitPoints(unsigned int amount){
    this->hitPoints = amount;
}
void ClapTrap::setEnergyPoints(unsigned int amount){
    this->energyPoints = amount;
}
void ClapTrap::setAttackDamage(unsigned int amount){
    this->attackDamage = amount;
}

std::string ClapTrap::getName() const{
    return(this->name);
}
int ClapTrap::getHitPoints()const{
    return (this->hitPoints);
}
int ClapTrap::getEnergyPoints()const{
    return (this->energyPoints);
}
int ClapTrap::getAttackDamage()const{
    return (this->attackDamage);
}