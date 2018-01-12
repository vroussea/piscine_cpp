/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:51 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:51 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name) {
    setDamage(damage);
    setAPCost(apcost);
}

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
}

AWeapon::~AWeapon(void) {
}

int                 AWeapon::getAPCost() const {
    return this->_apCost;
}

int                 AWeapon::getDamage() const {
    return this->_damage;
}

std::string const   AWeapon::getName() const {
    return this->_name;
}

void                AWeapon::setAPCost(int amount) {
    this->_apCost = (amount > 0 ? amount : 1);
}

void                AWeapon::setDamage(int amount) {
    this->_damage = (amount > 0 ? amount : 1);
}

void                AWeapon::setName(std::string name) {
    this->_name = name;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
    if (this != &rhs) {
        this->setName(rhs.getName());
        this->setAPCost(rhs.getAPCost());
        this->setDamage(rhs.getDamage());
    }

    return *this;
}