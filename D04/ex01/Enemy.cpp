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

Enemy::Enemy(int hp, std::string const & type) : _type(type) {
    setHP(hp);
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

Enemy::~Enemy(void) {
}

void        Enemy::takeDamage(int amount) {
    setHP(this->getHP() - (amount < 0 ? 0 : amount));
}

void        Enemy::setHP(int amount) {
    this->_hp = amount;
}

std::string const   Enemy::getType() const {
    return this->_type;
}

int                 Enemy::getHP() const {
    return this->_hp;
}

Enemy &Enemy::operator=(Enemy const &) {
    return *this;
}
