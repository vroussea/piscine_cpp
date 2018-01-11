#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

void    melee_attack(FragTrap * attacker, ScavTrap * target) {
    attacker->meleeAttack(target->getName());
    target->takeDamage(attacker->getMeleeDamage());
    std::cout << std::endl;
}

void    ranged_attack(ScavTrap * attacker, FragTrap * target) {
    attacker->rangedAttack(target->getName());
    target->takeDamage(attacker->getRangedDamage());
    std::cout << std::endl;
}

void    vaulthunter_dot_exe_attack(FragTrap * attacker, ScavTrap * target) {
    attacker->vaulthunter_dot_exe(target->getName());
    if (attacker->getEnergyPoints() >= 25)
        target->takeDamage(attacker->getMeleeDamage());
}

void    challenge(ScavTrap * challenger) {
    challenger->challengeNewcomer();
}

int main(void) {
    FragTrap *f0 = new FragTrap();
    ScavTrap *f1 = new ScavTrap();

    std::cout << *f0 << std::endl << std::endl;
    std::cout << *f1 << std::endl << std::endl;

    f1->meleeAttack(f0->getName());
    f0->rangedAttack(f1->getName());
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
    f1 = new ScavTrap("Daniel");
    ScavTrap f2(*f1);
    std::cout << f2 << std::endl << std::endl;
    std::cout << *f1 << std::endl << std::endl;
    challenge(f1);
    std::cout << *f1 << std::endl << std::endl;
    challenge(f1);
    std::cout << *f1 << std::endl << std::endl;
    challenge(f1);
    std::cout << *f1 << std::endl << std::endl;
    f1->takeDamage(100);
    f1->beRepaired(20);
    std::cout << *f1 << std::endl << std::endl;
    f0->beRepaired(80);
    std::cout << *f0 << std::endl << std::endl;
    f1->beRepaired(80000);

    delete f1;
    delete f0;

    NinjaTrap   n("");
    ClapTrap    c;
    ScavTrap    s("jean");
    FragTrap    fr;
    FragTrap    fr1 = fr;

    fr1.meleeAttack(n.getName());
    n.takeDamage(fr1.getMeleeDamage());
    n.beRepaired(fr1.getMeleeDamage());

    n.meleeAttack(fr1.getName());
    fr1.takeDamage(n.getMeleeDamage());
    n.rangedAttack((fr.getName()));
    fr.takeDamage(n.getRangedDamage());
    std::cout << n << std::endl << std::endl;
    n.ninjaShoebox(fr);
    std::cout << n << std::endl << std::endl;
    n.ninjaShoebox(s);
    NinjaTrap n1(n);
    n.ninjaShoebox(n1);
    std::cout << c << std::endl << std::endl;
    n.ninjaShoebox(c);
    std::cout << c << std::endl << std::endl;
    return 1;
}