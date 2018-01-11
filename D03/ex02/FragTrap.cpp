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

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1,
                                    ClapTrap::intToString(ClapTrap::_clapTrapNumber), 30, 20, 5) {
    srand(time(NULL));
    std::cout << "Booting sequence complete. Hello! I am your new steward bot. ";
    std::cout << "Designation: CL4P-TP, Hyperion Robot, Class C. ";
    std::cout << "Please adjust factory settings to meet your needs before deployment." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, (name.size() > 0 ? name : "Jack"), 30, 20, 5) {
    srand(time(NULL));
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
    *this = src;
    srand(time(NULL));
    std::cout << "O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << std::endl;
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

        std::cout << "FR4G-TP " << this->_name;
        std::cout << FragTrap::_randomAttack[random] << target;
        std::cout << ", causing " << this->_meleeDamage << " points of damage !" << std::endl;
    }
}

FragTrap &FragTrap::operator=(ClapTrap const &rhs) {
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

int const           FragTrap::_numberOfRandomAttacks = 6;

std::string const   FragTrap::_randomAttack[] = {" awesomely attacks ",
                                          " tries to attack ",
                                          " couldn't resign himself to attack, but eventually sent a bomb to ",
                                          " defragmented ",
                                          " recompiled his combat code and devastated ",
                                          " harms by mistake "};
