/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:43 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:43 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {

}

Character::Character() {

}

Character::Character(Character const &src) {
    *this = src;
}

Character::~Character(void) {

}

Character &Character::operator=(Character const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, Character const &i) {
    o << "The value of  is : ";

    return o;
}
