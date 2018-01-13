/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:45 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(int) {
}

SuperMutant::SuperMutant(SuperMutant const &src) {
    *this = src;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh ..." << std::endl;
}

void    SuperMutant::takeDamage(int amount) {
    amount -= 3;
    Enemy::takeDamage(amount);
}

SuperMutant &SuperMutant::operator=(SuperMutant const &) {
    return *this;
}
