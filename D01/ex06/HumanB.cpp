/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:39:11 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:39:11 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    this->weapon = 0;
}

HumanB::~HumanB(void) {
}

void    HumanB::attack(void) const {
    std::cout << this->name;
    std::cout << " attacks with his ";
    std::cout << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}