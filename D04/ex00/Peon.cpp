/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:04:59 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 17:04:59 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src) {
    *this = src;
    std::cout << "Peon called " << this->_name;
    std::cout << " has been copied !" << std::endl;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

void        Peon::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a pink pony !" << std::endl;
}

Peon &Peon::operator=(Peon const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
    }

    return *this;
}