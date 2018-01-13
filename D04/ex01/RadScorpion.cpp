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

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int) {
}

RadScorpion::RadScorpion(RadScorpion const &src) {
    *this = src;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &) {
    return *this;
}