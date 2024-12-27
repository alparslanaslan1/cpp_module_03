#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ben10");
    ClapTrap b;

    b = a;

    b.attack("123");
    b.takeDamage(4);
    b.beRepaired(2);
    return(0);
}