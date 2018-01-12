/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nerd.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:55:30 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 18:55:30 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Nerd.hpp"

Nerd::Nerd(void) {

}

Nerd::Nerd(std::string name) : Victim(name) {
    std::cout << "I make computer. Beep Beep Bop Bop" << std::endl;
}

Nerd::Nerd(Nerd const &src) : Victim(src) {
    *this = src;
    std::cout << "Nerd called " << this->_name;
    std::cout << " has been copied !" << std::endl;
}

Nerd::~Nerd(void) {
    std::cout << "delete " << this->_name << ";" << std::endl;
}

void        Nerd::getPolymorphed() const {
    std::cout << this->_name;
    std::cout << " has been turned into a monkey with glasses !" << std::endl;
}

Nerd &Nerd::operator=(Nerd const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
    }

    return *this;
}