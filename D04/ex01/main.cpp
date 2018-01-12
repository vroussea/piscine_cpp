/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:52 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:52 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int main(void) {
    PlasmaRifle plasmaRifle;
    PowerFist   powerFist;

    powerFist.attack();
    plasmaRifle.attack();

    return 1;
}