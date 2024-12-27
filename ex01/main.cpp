#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("ben10");
    ScavTrap b("ben1000");
    ScavTrap c(a);

    a.attack("ben10");
    c.attack("ben1000");
    b.takeDamage(b.getAttackDamage());
    b.beRepaired(30);
    b.guardGate();
}