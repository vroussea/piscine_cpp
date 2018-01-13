/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:44:40 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:44:40 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _marines(new ISpaceMarine*[1]){
    this->_nbUnits = 0;
}

Squad::Squad(int) {
}

Squad::Squad(ISquad const &src) {
    *this = src;
}

Squad::~Squad(void) {
    int i = 0;
    while (i < this->_nbUnits) {
        delete this->_marines[i];
        i++;
    }
    delete [] this->_marines;
}

int             Squad::getCount() const {
    return this->_nbUnits;
}

ISpaceMarine*   Squad::getUnit(int index) const {
    return this->_marines[index];
}

int             Squad::push(ISpaceMarine *spaceMarine) {
    this->_nbUnits++;
    realloc_marines();
    this->_marines[_nbUnits - 1] = spaceMarine;

    return this->_nbUnits;
}

void           Squad::realloc_marines() {
    ISpaceMarine    **newTab = new ISpaceMarine*[this->_nbUnits];

    int i = 0;
    while (i < this->_nbUnits - 1){
        newTab[i] = this->_marines[i];
        i++;
    }
    delete [] this->_marines;
    this->_marines = newTab;
}

Squad &Squad::operator=(ISquad const &src) {
    if (this != &src) {
        if (this->_nbUnits > 0) {
            int i = 0;
            while (i < this->_nbUnits) {
                delete this->_marines[i];
                i++;
            }
            delete [] this->_marines;
        }
        this->_nbUnits = src.getCount();
        this->_marines = new ISpaceMarine*[this->_nbUnits];
        int y = 0;
        while (y < this->_nbUnits) {
            this->_marines[y] = src.getUnit(y)->clone();
            y++;
        }
    }
    else {
        std::cout << this << " " << &src << std::endl;
    }
    return *this;
}
