/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:43 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:43 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Val") {
    setWeapon(nullptr);
    setAPMax(40);
    setAP(this->_apMax);
}

Character::Character(std::string const & name) : _name(name) {
    setWeapon(nullptr);
    setAPMax(40);
    setAP(this->_apMax);
}

Character::Character(Character const &src) {
    *this = src;
}

Character::~Character(void) {

}

void                Character::recoverAP() {
    setAP(this->_ap + 10);
}

void                Character::equip(AWeapon * aWeapon) {
    setWeapon(aWeapon);
}

void                Character::attack(Enemy * enemy) {
    if (this->_weapon && this->_ap >= this->_weapon->getAPCost()) {
        setAP(this->_ap - this->_weapon->getAPCost());
        std::cout << this->getName();
        std::cout << " attacks " << enemy->getType();
        std::cout << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0) {
            delete enemy;
        }
    }
}

std::string const   Character::getName() const {
    return this->_name;
}

AWeapon             *Character::getWeapon() const {
    return this->_weapon;
}

int                 Character::getAP() const {
    return this->_ap;
}

int                 Character::getAPMax() const {
    return this->_apMax;
}

void                Character::setWeapon(AWeapon * weapon) {
    this->_weapon = weapon;
}

void                Character::setAP(int ap) {
    this->_ap = (ap > this->_apMax ? this->_apMax : ap);
}

void                Character::setAPMax(int apMax) {
    this->_apMax = apMax;
}

Character &Character::operator=(Character const &) {
    return *this;
}

std::ostream &operator<<(std::ostream &o, Character const &i) {
    o << i.getName();
    o << " has " << i.getAP();
    o << " AP and ";

    if (i.getWeapon()) {
        std::cout << "wields a " << i.getWeapon()->getName() << std::endl;
    }
    else {
        std::cout << "is unarmed" << std::endl;
    }

    return o;
}
