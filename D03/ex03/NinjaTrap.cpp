/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:51:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 21:51:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {

}

NinjaTrap::NinjaTrap() {

}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
    *this = src;
}

NinjaTrap::~NinjaTrap(void) {

}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

