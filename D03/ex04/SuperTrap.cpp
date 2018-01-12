/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:38:58 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 13:38:58 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(100, 100, 120, 120, 1,
                                      ClapTrap::intToString(ClapTrap::_clapTrapNumber), 60, 20, 5) {
    srand(time(NULL));
    std::cout << "AWESOME generic SUP3R-TP ready to roll out !" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, (name.size() > 0 ? name : "Jack"), 60, 20, 5),
                                         NinjaTrap(name),
                                         FragTrap(name) {
    srand(time(NULL));
    std::cout << "How can a SUP3R-TP be this AWESOME ?" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src),
                                             NinjaTrap(src),
                                             FragTrap(src) {
    *this = src;
    srand(time(NULL));
    std::cout << "You AWESOMELY copied an AWESOME SUP3R-TP !" << std::endl;
}

SuperTrap::~SuperTrap(void) {
    std::cout << "This SUP3R-TP AWESOMELY exploded in the most AWESOME way !" << std::endl;
}

void        SuperTrap::rangedAttack(std::string const & target) const {
    this->FragTrap::rangedAttack(target);
}

void        SuperTrap::meleeAttack(std::string const & target) const {
    this->NinjaTrap::meleeAttack(target);
}

SuperTrap &SuperTrap::operator=(ClapTrap const &rhs) {
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

std::ostream    &operator<<(std::ostream & o, SuperTrap const & i) {
    o << "SUP3R-TP " << i.getName();
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