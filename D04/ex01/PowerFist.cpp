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

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(int) {
}

PowerFist::PowerFist(PowerFist const &src) {
    *this = src;
}

PowerFist::~PowerFist(void) {
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const &) {
    return *this;
}
