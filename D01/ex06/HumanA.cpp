/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:38:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:38:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon1) : name(name), weapon(weapon1) {
}

HumanA::~HumanA(void) {
}

void    HumanA::attack(void) const {
    std::cout << this->name;
    std::cout << " attacks with his ";
    std::cout << this->weapon.getType() << std::endl;
}