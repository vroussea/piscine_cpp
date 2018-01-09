/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:40:55 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:40:55 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

Weapon::~Weapon(void) {

}

void            Weapon::setType(std::string type) {
    this->type = type;
}

std::string     Weapon::getType(void) const {
    return Weapon::type;
}