#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
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

    ScavTrap    s0;
    ScavTrap    s1("");
    ScavTrap    s2("Marcel");
    ScavTrap    s3(s2);

    std::cout << std::endl << "DISPLAYING 4 SCAVTRAPS !"  << std::endl << std::endl;

    std::cout << s0 << std::endl << std::endl;
    std::cout << s1 << std::endl << std::endl;
    std::cout << s2 << std::endl << std::endl;
    std::cout << s3 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SCAVTRAP MELEE ATTACK !"  << std::endl << std::endl;

    std::cout << s1 << std::endl << std::endl;
    s0.meleeAttack(s1.getName());
    s1.takeDamage(s0.getMeleeDamage());
    std::cout << std::endl << s1 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SCAVTRAP RANGED ATTACK !"  << std::endl << std::endl;

    std::cout << s2 << std::endl << std::endl;
    s0.rangedAttack(s2.getName());
    s2.takeDamage(s0.getRangedDamage());
    std::cout << std::endl << s2 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SCAVTRAP MAX DAMAGE AND SCAVTRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << s3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    s3.takeDamage(110);
    std::cout << s3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    s3.beRepaired(20);
    std::cout << s3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO SCAVTRAP :" << std::endl;
    s3.beRepaired(200);
    std::cout << s3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SCAVTRAP CHALLENGENEWCOMER !"  << std::endl << std::endl;

    int i = 0;
    while (i < 10) {
        s3.challengeNewcomer();
        std::cout << s3 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

void    claptraps(void) {
    std::cout << "CREATING 4 CLAPTRAPS !"  << std::endl << std::endl;

    ClapTrap    c0;
    ClapTrap    c1(100, 100, 50, 50, 1, "", 20, 15, 3);
    ClapTrap    c2(100, 100, 100, 100, 1, "Daniel", 30, 20, 5);
    ClapTrap    c3(c2);

    std::cout << std::endl << "DISPLAYING 4 CLAPTRAPS !"  << std::endl << std::endl;

    std::cout << c0 << std::endl << std::endl;
    std::cout << c1 << std::endl << std::endl;
    std::cout << c2 << std::endl << std::endl;
    std::cout << c3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING CLAPTRAP MAX DAMAGE AND CLAPTRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << c3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO CLAPTRAP :" << std::endl;
    c3.takeDamage(110);
    std::cout << c3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO CLAPTRAP :" << std::endl;
    c3.beRepaired(20);
    std::cout << c3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO CLAPTRAP :" << std::endl;
    c3.beRepaired(200);
    std::cout << c3 << std::endl << std::endl;

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

void    ninjatraps(void) {
    std::cout << "CREATING 4 NINJATRAPS !"  << std::endl << std::endl;

    NinjaTrap    n0;
    NinjaTrap    n1("");
    NinjaTrap    n2("Marcel");
    NinjaTrap    n3(n2);

    std::cout << std::endl << "DISPLAYING 4 NINJATRAPS !"  << std::endl << std::endl;

    std::cout << n0 << std::endl << std::endl;
    std::cout << n1 << std::endl << std::endl;
    std::cout << n2 << std::endl << std::endl;
    std::cout << n3 << std::endl << std::endl;

    std::cout << std::endl << "STARTING NINJATRAP MELEE ATTACK !"  << std::endl << std::endl;

    std::cout << n1 << std::endl << std::endl;
    n0.meleeAttack(n1.getName());
    n1.takeDamage(n0.getMeleeDamage());
    std::cout << std::endl << n1 << std::endl << std::endl;

    std::cout << std::endl << "STARTING NINJATRAP RANGED ATTACK !"  << std::endl << std::endl;

    std::cout << n2 << std::endl << std::endl;
    n0.rangedAttack(n2.getName());
    n2.takeDamage(n0.getRangedDamage());
    std::cout << std::endl << n2 << std::endl << std::endl;

    std::cout << std::endl << "TESTING NINJATRAP MAX DAMAGE AND NINJATRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << n3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO NINJATRAP :" << std::endl;
    n3.takeDamage(110);
    std::cout << n3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO NINJATRAP :" << std::endl;
    n3.beRepaired(20);
    std::cout << n3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO NINJATRAP :" << std::endl;
    n3.beRepaired(200);
    std::cout << n3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING NINJATRAP NINJASHOEBOX !"  << std::endl << std::endl;

    FragTrap    f4;
    ClapTrap    c4;
    ScavTrap    s4;
    NinjaTrap   n4;

    int i = 0;
    while (i < 10) {
        n3.ninjaShoebox(n4);
        n3.ninjaShoebox(f4);
        n3.ninjaShoebox(c4);
        std::cout << c4 << std::endl;
        n3.ninjaShoebox(s4);
        std::cout << n3 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

void    supertraps(void) {
    std::cout << "CREATING 4 SUPERTRAPS !"  << std::endl << std::endl;

    SuperTrap    su0;
    SuperTrap    su1("");
    SuperTrap    su2("Marcel");
    SuperTrap    su3(su2);

    std::cout << std::endl << "DISPLAYING 4 SUPERTRAPS !"  << std::endl << std::endl;

    std::cout << su0 << std::endl << std::endl;
    std::cout << su1 << std::endl << std::endl;
    std::cout << su2 << std::endl << std::endl;
    std::cout << su3 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SUPERTRAP MELEE ATTACK !"  << std::endl << std::endl;

    std::cout << su1 << std::endl << std::endl;
    su0.meleeAttack(su1.getName());
    su1.takeDamage(su0.getMeleeDamage());
    std::cout << std::endl << su1 << std::endl << std::endl;

    std::cout << std::endl << "STARTING SUPERTRAP RANGED ATTACK !"  << std::endl << std::endl;

    std::cout << su2 << std::endl << std::endl;
    su0.rangedAttack(su2.getName());
    su2.takeDamage(su0.getRangedDamage());
    std::cout << std::endl << su2 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SUPERTRAP MAX DAMAGE AND SUPERTRAP MAX REPAIR !"  << std::endl << std::endl;

    std::cout << su3 << std::endl << std::endl;
    std::cout << "SENDING 110 DAMAGE POINTS TO SUPERTRAP :" << std::endl;
    su3.takeDamage(110);
    std::cout << su3 << std::endl << std::endl;
    std::cout << "HEALING 20 DAMAGE POINTS TO SUPERTRAP :" << std::endl;
    su3.beRepaired(20);
    std::cout << su3 << std::endl << std::endl;
    std::cout << "HEALING 200 DAMAGE POINTS TO SUPERTRAP :" << std::endl;
    su3.beRepaired(200);
    std::cout << su3 << std::endl << std::endl;

    std::cout << std::endl << "TESTING SUPERTRAP VAULTHUNTER_DOT_EXE !"  << std::endl << std::endl;

    int i = 0;
    while (i < 10) {
        su3.vaulthunter_dot_exe(su0.getName());
        su0.takeDamage(su3.getMeleeDamage());
        std::cout << su3 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "TESTING SUPERTRAP NINJASHOEBOX !"  << std::endl << std::endl;

    FragTrap    f4;
    ClapTrap    c4;
    ScavTrap    s4;
    NinjaTrap   n4;

    i = 0;
    while (i < 10) {
        su2.ninjaShoebox(n4);
        su2.ninjaShoebox(f4);
        su2.ninjaShoebox(c4);
        std::cout << c4 << std::endl;
        su2.ninjaShoebox(s4);
        std::cout << su2 << std::endl << std::endl;
        i++;
    }

    std::cout << std::endl << "EXITING FUNCTION !"  << std::endl << std::endl;
}

int main(void) {
    fragtraps();
    std::cout << std::endl;
    scavtraps();
    std::cout << std::endl;
    claptraps();
    std::cout << std::endl;
    ninjatraps();
    std::cout << std::endl;
    supertraps();

    return 1;
}