/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:28:45 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:28:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

void    test_marines(void) {
    ISpaceMarine    *joe = new TacticalMarine;
    ISpaceMarine    *jim = new AssaultTerminator;
    ISpaceMarine    *jack = joe->clone();
    ISpaceMarine    *jay = jim->clone();

    std::cout << std::endl;
    joe->battleCry();
    joe->rangedAttack();
    joe->meleeAttack();
    std::cout << std::endl;
    jim->battleCry();
    jim->rangedAttack();
    jim->meleeAttack();
    std::cout << std::endl;
    jack->battleCry();
    jack->rangedAttack();
    jack->meleeAttack();
    std::cout << std::endl;
    jay->battleCry();
    jay->rangedAttack();
    jay->meleeAttack();
    std::cout << std::endl;

    delete joe;
    delete jim;
    delete jack;
    delete jay;
}

void    test_squad(void) {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(jim->clone());
    vlc->push(jim->clone());
    vlc->push(bob->clone());
    vlc->push(jim->clone());
    vlc->push(jim->clone());
    vlc->push(jim->clone());
    vlc->push(jim->clone());
    vlc->push(bob->clone());
    vlc->push(bob->clone());
    vlc->push(bob->clone());
    vlc->push(jim->clone());
    vlc->push(bob->clone());
    vlc->push(jim->clone());
    vlc->push(jim->clone());
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Size of the squad : " << vlc->getCount() << std::endl;

    delete vlc;
}

void    test_copy_squad(void) {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);

    ISquad* vlc1 = new Squad(*vlc);
    ISquad* vlc2 = new Squad;

    std::cout << std::endl << std::endl << "FIRST SQUAD" << std::endl << std::endl;

    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Size of the squad : " << vlc->getCount() << std::endl;

    std::cout << std::endl << std::endl << "SECOND SQUAD" << std::endl << std::endl;

    for (int i = 0; i < vlc1->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc1->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Size of the squad : " << vlc1->getCount() << std::endl;

    std::cout << std::endl << std::endl << "THIRD SQUAD" << std::endl << std::endl;

    vlc2->push(bob->clone());

    *vlc2 = *vlc1;

    for (int i = 0; i < vlc2->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Size of the squad : " << vlc2->getCount() << std::endl;

    delete vlc;
    delete vlc1;
    delete vlc2;
}

int     main(void) {
    test_marines();

    test_squad();

    test_copy_squad();

    return 1;
}