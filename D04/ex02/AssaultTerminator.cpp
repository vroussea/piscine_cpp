/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:15:13 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:15:13 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(int) {
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
    *this = src;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "I’ll be back ..." << std::endl;
}

void                AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void                AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator*  AssaultTerminator::clone() const {
    return new AssaultTerminator;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &) {
    return *this;
}
