#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>


void    melee_attack(FragTrap * attacker, FragTrap * target) {
    attacker->meleeAttack(target->getName());
    target->takeDamage(attacker->getMeleeDamage());
    std::cout << std::endl;
}

void    ranged_attack(FragTrap * attacker, FragTrap * target) {
    attacker->rangedAttack(target->getName());
    target->takeDamage(attacker->getRangedDamage());
    std::cout << std::endl;
}

void    vaulthunter_dot_exe_attack(FragTrap * attacker, FragTrap * target) {
    attacker->vaulthunter_dot_exe(target->getName());
    if (attacker->getEnergyPoints() >= 25)
        target->takeDamage(attacker->getMeleeDamage());
}

int main(void) {
    FragTrap *f0 = new FragTrap();
    FragTrap *f1 = new FragTrap("");

    std::cout << *f0 << std::endl << std::endl;
    std::cout << *f1 << std::endl << std::endl;

    bool dead = false;
    while (!dead) {
        if (f1->getHitPoints() - (f0->getMeleeDamage() - f1->getArmor()) <= 0) {
            ranged_attack(f1, f0);
            ranged_attack(f1, f0);
            ranged_attack(f1, f0);
            ranged_attack(f1, f0);
            ranged_attack(f1, f0);
            std::cout << *f0 << std::endl << std::endl;
            vaulthunter_dot_exe_attack(f0, f1);
        }
        else
            melee_attack(f0, f1);
        std::cout << *f1 << std::endl << std::endl;
        if (f1->getHitPoints() == 0) {
            vaulthunter_dot_exe_attack(f0, f1);
            std::cout << *f1 << std::endl << std::endl;
            delete f1;
            dead = true;
        }
        else {
            f1->beRepaired(5);
            std::cout << *f1 << std::endl << std::endl;

        }
    }
    f1 = new FragTrap(*f0);
    f0->beRepaired(20);
    std::cout << *f0 << std::endl << std::endl;
    f0->beRepaired(80);
    std::cout << *f0 << std::endl << std::endl;
    f0->beRepaired(80000);
    vaulthunter_dot_exe_attack(f1, f0);
    vaulthunter_dot_exe_attack(f1, f0);
    vaulthunter_dot_exe_attack(f1, f0);
    vaulthunter_dot_exe_attack(f1, f0);
    vaulthunter_dot_exe_attack(f1, f0);
    delete f1;
    delete f0;
    return 1;
}