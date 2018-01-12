/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:03:59 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 17:03:59 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << this->_name;
    std::cout << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src) {
    *this = src;
    std::cout << "Victim called " << this->_name;
    std::cout << " has been copied !" << std::endl;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name;
    std::cout << " just died for no apparent reason !" << std::endl;
}

void        Victim::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const {
    return this->_name;
}

Victim &Victim::operator=(Victim const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, Victim const &i) {
    o << "I'm " << i.getName();
    o << " and I like otters !" << std::endl;

    return o;
}
