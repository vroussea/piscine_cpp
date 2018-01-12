/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:29:10 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 16:29:10 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    std::cout << "How did you get here ?" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name;
    std::cout << ", " << this->_title;
    std::cout << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
    std::cout << this->_name;
    std::cout << ", " << this->_title;
    std::cout << ", has been copied !" << std::endl;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name;
    std::cout << ", " << this->_title;
    std::cout << ", is dead. Consequences will never be the same !" << std::endl;
}

void        Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
        this->_title = rhs.getTitle();
    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &i) {
    o << "I am " << i.getName();
    o << ", " << i.getTitle();
    o << ", and I like ponies !" << std::endl;

    return o;
}
