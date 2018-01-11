/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:18:34 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 18:18:34 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, ClapTrap::intToString(ClapTrap::_clapTrapNumber), 20, 15, 3) {
    srand(time(NULL));
    std::cout << "I'm alive !!!!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, (name.size() > 0 ? name : "Jack"), 20, 15, 3) {
    srand(time(NULL));
    std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
    srand(time(NULL));
    std::cout << "This time it'll be awesome, I promise!" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

void        ScavTrap::rangedAttack(std::string const & target) const {
    std::cout << "SC4V-TP " << this->_name;
    std::cout << " attacks " << target;
    std::cout << " with its gun, causing " << this->_rangedDamage << " points of damage !" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target) const {
    std::cout << "SC4V-TP " << this->_name;
    std::cout << " attacks " << target;
    std::cout << " with its ... \"fists\" ?, causing " << this->_meleeDamage << " points of damage !" << std::endl;
}

void        ScavTrap::challengeNewcomer(void) {
    if (this->_energyPoints < 25)
        std::cout << "Can't give you a challenge right now, my energy is at 0." << std::endl;
    else {
        this->_energyPoints -= 25;
        int random = rand() % ScavTrap::_numberOfRandomChallenges;

        std::cout << "SC4V-TP " << this->_name;
        std::cout << " gives you a challenge :" << std::endl;
        std::cout << ScavTrap::_randomChallenges[random] << std::endl;
        std::cout << "Let's try your best to do it !" << std::endl;
    }
}

ScavTrap &ScavTrap::operator=(ClapTrap const &rhs) {
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

int const           ScavTrap::_numberOfRandomChallenges = 6;

std::string const   ScavTrap::_randomChallenges[] = {"\"Shoot in your head.\"",
                                                     "\"Give me your money.\"",
                                                     "\"Get lost looser.\"",
                                                     "\"ERROR - No challenge available - reinitialization in progress\"",
                                                     "\"Kill someone.\"",
                                                     "\"Yes.\""};
