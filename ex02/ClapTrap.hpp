#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();

        ClapTrap(std::string name);

        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(const std::string name);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackDamage(unsigned int amount);

        std::string getName() const;
        int getHitPoints()const;
        int getEnergyPoints()const;
        int getAttackDamage()const;

    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

};


#endif