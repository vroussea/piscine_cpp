/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:48 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:48 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Plasma Rifle", 5, 21) {
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
}

PowerFist::PowerFist(PowerFist const &src) {
    *this = src;
}

PowerFist::~PowerFist(void) {
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    if (this != &rhs) {
        this->setName(rhs.getName());
        this->setAPCost(rhs.getAPCost());
        this->setDamage(rhs.getDamage());
    }

    return *this;
}
