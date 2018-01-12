#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void    fragtraps(void) {
    std::cout << "CREATING 4 FRAGTRAPS !"  << std::endl << std::endl;

    FragTrap    f0;
    FragTrap    f1("");
    FragTrap    f2("Marcel");
    FragTrap    f3(f2);

    std::cout << std::endl << "DISPLAYING 4 FRAGTRAPS !"  << std::endl << std::endl;

    std::cout << f0 << std::endl << std::endl;
    std::cout << f1 << std::endl << std::endl;
    std::cout << f2 << std::endl << std::endl;
    std::cout << f3 << std::endl << std::endl;

    std::cout << std::endl << "STARTING FRAGTRAP MELEE ATTACK !"  << std::endl << std::endl;

    std::cout << f1 << std::endl << std::endl;
    f0.meleeAttack(f1.getName());
    f1.takeDamage(f0.getMeleeDamage());
    std::cout << std::endl << f1 << std::endl << std::endl;

    std::cout << std::endl << "STARTING FRAGTRAP RANGED ATTACK !"  << std::endl << std::endl;

    std::cout << f2 << std::endl << std::endl;
    f0.rangedAttack(f2.getName());
    f2.takeDamage(f0.getRangedDamage());
    std::cout << std::endl << f2 << std::endl << std::endl;

    std::cout << std::endl << "TESTING FRAGTRAP MAX DAMAGE AND FRAGTRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << f3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO FRAGTRAP :" << std::endl;
    f3.takeDamage(110);
    std::cout << f3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO FRAGTRAP :" << std::endl;
    f3.beRepaired(20);
    std::cout << f3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO FRAGTRAP :" << std::endl;
    f3.beRepaired(200);
    std::cout << f3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING FRAGTRAP VAULTHUNTER_DOT_EXE !"  << std::endl << std::endl;

    int i = 0;
    while (i < 10) {
        f3.vaulthunter_dot_exe(f0.getName());
        f0.takeDamage(f3.getMeleeDamage());
        std::cout << f3 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

void    scavtraps(void) {
    std::cout << "CREATING 4 SCAVTRAPS !"  << std::endl << std::endl;

    ScavTrap    f0;
    ScavTrap    f1("");
    ScavTrap    f2("Marcel");
    ScavTrap    f3(f2);

    std::cout << std::endl << "DISPLAYING 4 SCAVTRAPS !"  << std::endl << std::endl;

    std::cout << f0 << std::endl << std::endl;
    std::cout << f1 << std::endl << std::endl;
    std::cout << f2 << std::endl << std::endl;
    std::cout << f3 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SCAVTRAP MELEE ATTACK !"  << std::endl << std::endl;

    std::cout << f1 << std::endl << std::endl;
    f0.meleeAttack(f1.getName());
    f1.takeDamage(f0.getMeleeDamage());
    std::cout << std::endl << f1 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SCAVTRAP RANGED ATTACK !"  << std::endl << std::endl;

    std::cout << f2 << std::endl << std::endl;
    f0.rangedAttack(f2.getName());
    f2.takeDamage(f0.getRangedDamage());
    std::cout << std::endl << f2 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SCAVTRAP MAX DAMAGE AND SCAVTRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << f3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    f3.takeDamage(110);
    std::cout << f3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    f3.beRepaired(20);
    std::cout << f3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    f3.beRepaired(200);
    std::cout << f3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SCAVTRAP CHALLENGENEWCOMER !"  << std::endl << std::endl;

    int i = 0;
    while (i < 10) {
        f3.challengeNewcomer();
        std::cout << f3 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

int main(void) {
    fragtraps();
    std::cout << std::endl;
    scavtraps();

    return 1;
}