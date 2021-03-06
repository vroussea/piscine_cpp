/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:03:59 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:03:59 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(int) {
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
    *this = src;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ..." << std::endl;
}

void            TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void            TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void            TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine* TacticalMarine::clone() const {
    return new TacticalMarine;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &) {
    return *this;
}