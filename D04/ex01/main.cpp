/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:52 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:52 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "BBGun.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include <iostream>


void test_weapons_ennemies(void) {
    PlasmaRifle plasmaRifle;
    PowerFist   powerFist;
    BBGun       *bbgun = new BBGun();
    RadScorpion radScorpion;
    Enemy       *supermutant = new SuperMutant();

    powerFist.attack();
    plasmaRifle.attack();
    bbgun->attack();

    std::cout << supermutant->getHP() << std::endl;
    supermutant->takeDamage(1);
    std::cout << supermutant->getHP() << std::endl;
    supermutant->takeDamage(100);
    std::cout << supermutant->getHP() << std::endl;

    std::cout << radScorpion.getHP() << std::endl;
    radScorpion.takeDamage(1);
    std::cout << radScorpion.getHP() << std::endl;
    radScorpion.takeDamage(100);
    std::cout << radScorpion.getHP() << std::endl;

    delete bbgun;

    delete supermutant;

}

int main()
{
    test_weapons_ennemies();

    Character* zaz = new Character();
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    SuperMutant *superMutant = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->recoverAP();
    std::cout << *zaz;
    zaz->recoverAP();
    std::cout << *zaz;
    zaz->recoverAP();
    std::cout << *zaz;
    zaz->recoverAP();
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->equip(nullptr);
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->attack(superMutant);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(superMutant);

    delete zaz;
    return 0;
}
