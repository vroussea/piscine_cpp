/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:49 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:49 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(int) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
    *this = src;
}

PlasmaRifle::~PlasmaRifle(void) {
}

void    PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &) {
    return *this;
}