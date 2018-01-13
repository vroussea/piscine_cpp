/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BBGun.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:33:43 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 11:33:43 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BBGun.hpp"

BBGun::BBGun(void) : AWeapon("BB Gun", 1, 1) {
}

BBGun::BBGun(int) {
}

BBGun::BBGun(BBGun const &src) {
    *this = src;
}

BBGun::~BBGun(void) {
}

void    BBGun::attack() const {
    std::cout << "* POP ... pick *" << std::endl;
}

BBGun &BBGun::operator=(BBGun const &) {
    return *this;
}
