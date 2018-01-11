/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:48:38 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 11:48:38 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

std::string FragTrap::intToString(int value) {
    std::ostringstream convert;

    convert << value;

    return convert.str();

}

FragTrap::FragTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
                           _level(1), _name(FragTrap::intToString(FragTrap::_fragTrapNumber)), _meleeDamage(30),
                           _rangedDamage(20), _armor(5){
    srand(time(NULL));
    FragTrap::_fragTrapNumber++;
    std::cout << "Booting sequence complete. Hello! I am your new steward bot. ";
    std::cout << "Designation: CL4P-TP, Hyperion Robot, Class C. ";
    std::cout << "Please adjust factory settings to meet your needs before deployment." << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
                                       _level(1), _name(name.size() > 0 ? name : "Jack"), _meleeDamage(30),
                                       _rangedDamage(20), _armor(5) {
    srand(time(NULL));
    FragTrap::_fragTrapNumber++;
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;

}

FragTrap::FragTrap(FragTrap const &src) {
    FragTrap::_fragTrapNumber++;
    std::cout << "O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void) {
    std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void        FragTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP " << this->_name;
    std::cout << " attacks " << target;
    std::cout << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP " << this->_name;
    std::cout << " attacks " << target;
    std::cout << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints < 25)
        std::cout << "NOT ENOUGH Energ............." << std::endl;
    else {
        this->_energyPoints -= 25;
        int random = rand() % FragTrap::_numberOfRandomAttacks;

        std::cout << "FR4G-TP" << this->_name;
        std::cout << FragTrap::_randomAttack[random] << target;
        std::cout << ", causing " << this->_meleeDamage << " points of damage !" << std::endl;
    }
}

void        FragTrap::takeDamage(unsigned int amount) {
    unsigned int damageAfterShield = amount;

    std::cout << "FR4G-TP " << this->_name;

    damageAfterShield = ((int)(damageAfterShield - this->_armor) >= 0 ? damageAfterShield - this->_armor : 0);
    int tooMuchDamageTaken = (int)(this->_hitPoints - damageAfterShield);
    this->_hitPoints = ((int)(this->_hitPoints - damageAfterShield) > 0 ? this->_hitPoints - damageAfterShield : 0);

    if (tooMuchDamageTaken > 0)
        tooMuchDamageTaken = 0;
    std::cout << " took " << damageAfterShield + tooMuchDamageTaken << " points of damage !" << std::endl;
}

void        FragTrap::beRepaired(unsigned int amount) {
    int difHitsPoints = (int)((this->_maxHitPoints - this->_hitPoints));
    amount = ((int)(this->_hitPoints + amount <= this->_maxHitPoints) ?
              amount : difHitsPoints);
    std::cout << "FR4G-TP " << this->_name;
    std::cout << " got repaired of ";
    std::cout << amount << " points of damage !" << std::endl;
    this->_hitPoints = (this->_hitPoints + amount <= this->_maxHitPoints ?
                        this->_hitPoints + amount : this->_maxHitPoints);
}

int         FragTrap::getHitPoints() const {
    return this->_hitPoints;
}

int         FragTrap::getMaxHitPoints() const {
    return this->_maxHitPoints;
}

int         FragTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

int         FragTrap::getMaxEnergyPoints() const {
    return this->_maxEnergyPoints;
}

int         FragTrap::getLevel() const{
    return this->_level;
}

std::string FragTrap::getName() const {
    return this->_name;
}

int         FragTrap::getMeleeDamage() const {
    return this->_meleeDamage;
}

int         FragTrap::getRangedDamage() const {
    return this->_rangedDamage;
}

int         FragTrap::getArmor() const {
    return this->_armor;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
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

std::ostream    &operator<<(std::ostream & o, FragTrap const & i) {
    o << "FR4G-TP " << i.getName();
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

int                 FragTrap::_fragTrapNumber = 0;

int const           FragTrap::_numberOfRandomAttacks = 6;

std::string const   FragTrap::_randomAttack[] = {" awesomely attacks ",
                                          " tries to attack ",
                                          " couldn't resign himself to attack, but eventually sent a bomb to ",
                                          " defragmented ",
                                          " recompiled his combat code and devastated ",
                                          " harms by mistake "};
