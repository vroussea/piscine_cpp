/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:46 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:46 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {

}

Enemy::Enemy() {

}

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

Enemy::~Enemy(void) {

}

Enemy &Enemy::operator=(Enemy const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream &operator<<(std::ostream &o, Enemy const &i) {
    o << "The value of  is : ";

    return o;
}
