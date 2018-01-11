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

std::string ScavTrap::intToString(int value) {
    std::ostringstream convert;

    convert << value;

    return convert.str();

}

ScavTrap::ScavTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
                           _level(1), _name(ScavTrap::intToString(ScavTrap::_fragTrapNumber)), _meleeDamage(20),
                           _rangedDamage(15), _armor(3){
    srand(time(NULL));
    ScavTrap::_fragTrapNumber++;
    std::cout << "I'm alive !!!!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
                                       _level(1), _name(name.size() > 0 ? name : "Jack"), _meleeDamage(20),
                                       _rangedDamage(15), _armor(3) {
    srand(time(NULL));
    ScavTrap::_fragTrapNumber++;
    std::cout << "Let's get this party started!" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &src) {
    ScavTrap::_fragTrapNumber++;
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

void        ScavTrap::takeDamage(unsigned int amount) {
    unsigned int damageAfterShield = amount;

    std::cout << "SC4V-TP " << this->_name;

    damageAfterShield = ((int)(damageAfterShield - this->_armor) >= 0 ? damageAfterShield - this->_armor : 0);
    int tooMuchDamageTaken = (int)(this->_hitPoints - damageAfterShield);
    this->_hitPoints = ((int)(this->_hitPoints - damageAfterShield) > 0 ? this->_hitPoints - damageAfterShield : 0);

    if (tooMuchDamageTaken > 0)
        tooMuchDamageTaken = 0;
    std::cout << " took " << damageAfterShield + tooMuchDamageTaken << " points of damage !" << std::endl;
}

void        ScavTrap::beRepaired(unsigned int amount) {
    int difHitsPoints = (int)((this->_maxHitPoints - this->_hitPoints));
    amount = ((int)(this->_hitPoints + amount <= this->_maxHitPoints) ?
              amount : difHitsPoints);
    std::cout << "SC4V-TP " << this->_name;
    std::cout << " got repaired of ";
    std::cout << amount << " points of damage !" << std::endl;
    this->_hitPoints = (this->_hitPoints + amount <= this->_maxHitPoints ?
                        this->_hitPoints + amount : this->_maxHitPoints);
}

int         ScavTrap::getHitPoints() const {
    return this->_hitPoints;
}

int         ScavTrap::getMaxHitPoints() const {
    return this->_maxHitPoints;
}

int         ScavTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

int         ScavTrap::getMaxEnergyPoints() const {
    return this->_maxEnergyPoints;
}

int         ScavTrap::getLevel() const{
    return this->_level;
}

std::string ScavTrap::getName() const {
    return this->_name;
}

int         ScavTrap::getMeleeDamage() const {
    return this->_meleeDamage;
}

int         ScavTrap::getRangedDamage() const {
    return this->_rangedDamage;
}

int         ScavTrap::getArmor() const {
    return this->_armor;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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

std::ostream    &operator<<(std::ostream & o, ScavTrap const & i) {
    o << "SC4V-TP " << i.getName();
    o << ", level " << i.getLevel();
    o << " has " << i.getHitPoints();
    o << "(" << i.getMaxHitPoints();
    o << ") Hit Points left and " << i.getEnergyPoints();
    o << "(" << i.getMaxEnergyPoints();
    o << ") Energy Points left." << std::endl;
    o << "It has " << i.getMeleeDamage();
    o << " melee damage points, " << i.getRangedDamage();
    o << " ranged damage points and " << i.getArmor();
    o << " armor points.";

    return o;
}

int                 ScavTrap::_fragTrapNumber = 0;

int const           ScavTrap::_numberOfRandomChallenges = 6;

std::string const   ScavTrap::_randomChallenges[] = {"\"Shoot in your head.\"",
                                                     "\"Give me your money.\"",
                                                     "\"Get lost looser.\"",
                                                     "\"ERROR - No challenge available - reinitialization in progress\"",
                                                     "\"Kill someone.\"",
                                                     "\"Yes.\""};
