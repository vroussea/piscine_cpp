/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:45 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) {

}

SuperMutant::SuperMutant() {

}

SuperMutant::SuperMutant(SuperMutant const &src) {
    *this = src;
}

SuperMutant::~SuperMutant(void) {

}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, SuperMutant const &i) {
    o << "The value of  is : ";

    return o;
}
