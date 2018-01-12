/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:44 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:44 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) {

}

RadScorpion::RadScorpion() {

}

RadScorpion::RadScorpion(RadScorpion const &src) {
    *this = src;
}

RadScorpion::~RadScorpion(void) {

}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, RadScorpion const &i) {
    o << "The value of  is : ";

    return o;
}
