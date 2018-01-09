/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:23:42 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 14:23:42 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {

}

ZombieEvent::~ZombieEvent() {

}

void    ZombieEvent::setZombieType(std::string type) {
    ZombieEvent::type = type;
}

Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name, ZombieEvent::type);
    return zombie;
}

std::string ZombieEvent::type = "";