/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:51:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 21:51:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1,
                                    ClapTrap::intToString(ClapTrap::_clapTrapNumber), 60, 5, 0) {
    srand(time(NULL));
    std::cout << "You saw a shadow." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, (name.size() > 0 ? name : "Jack"), 60, 5, 0) {
    srand(time(NULL));
    std::cout << "Did a shadow just hit you ?" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src) {
    *this = src;
    srand(time(NULL));
    std::cout << "This copy of a shadow is strange." << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "One of the shadow around you just disappeared ..." << std::endl;
}

void        NinjaTrap::rangedAttack(std::string const & target) const {
    std::cout << "SH4D0W-TP " << this->_name;
    std::cout << "... I mean A SHADOW attacks " << target;
    std::cout << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
}

void        NinjaTrap::meleeAttack(std::string const & target) const {
    std::cout << "SH4D0W-TP " << this->_name;
    std::cout << "... I mean A SHADOW attacks " << target;
    std::cout << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
}

void        NinjaTrap::ninjaShoebox(ClapTrap & target) {
    if (this->_energyPoints < 20)
        std::cout << "This shadow cannot DESTROY filthy ClapTraps because it lacks energy !" << std::endl;
    else {
        this->_energyPoints -= 20;

        std::cout << "SH4D0W-TP " << this->_name;
        std::cout << " destroyed " << target.getName() << " with a surprise attack.";
        std::cout << " This filthy ClapTrap..." << std::endl;
        target.setHitPoints(0);
    }
}

void        NinjaTrap::ninjaShoebox(ScavTrap & target) {
    if (this->_energyPoints < 25)
        std::cout << "This shadow cannot do tricks because it lacks energy !" << std::endl;
    else {
        this->_energyPoints -= 25;

        std::cout << "SH4D0W-TP " << this->_name;
        std::cout << " do a ninja trick to " << target.getName() << ". And while the ScavTrap is focused on the trick";
        std::cout << " the shadow steal all its ammo." << std::endl;
        target.setHitPoints(0);
    }
}

void        NinjaTrap::ninjaShoebox(FragTrap & target) {
    if (this->_energyPoints < 25)
        std::cout << "This shadow cannot do surprise attack because it lacks energy !" << std::endl;
    else {
        this->_energyPoints -= 25;

        std::cout << "SH4D0W-TP " << this->_name;
        std::cout << " tries to do a sneaky attack on " << target.getName();
        std::cout << ". But because this FragTrap won't be fooled by this cheap trick it failed.";
        std::cout << " It hurts itself in its confusion." << std::endl;
        this->takeDamage(1);
    }
}

void        NinjaTrap::ninjaShoebox(NinjaTrap & target) {
    if (this->_energyPoints < 1)
        std::cout << "This shadow cannot dance because it lacks energy !" << std::endl;
    else {
        this->_energyPoints -= 1;

        std::cout << "SH4D0W-TP " << this->_name;
        std::cout << " dance with its fellow Ninja comrade " << target.getName();
        std::cout << " ! YAY !" << std::endl;
    }
}

NinjaTrap &NinjaTrap::operator=(ClapTrap const &rhs) {
    if (this != &rhs) {
        this->_hitPoints = rhs.getHitPoints();
        this->_maxHitPoints = rhs.getMaxHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
        this->_level = rhs.getLevel();
        this->_meleeDamage = rhs.getMeleeDamage();
        this->_rangedDamage = rhs.getRangedDamage();
        this->_armor = rhs.getArmor();
        this->_name = rhs.getName();
    }

    return *this;
}