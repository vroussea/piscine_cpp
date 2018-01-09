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

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* zombie = new Zombie("", ZombieEvent::type);
    zombie->name = name;
    zombie->announce();
    return zombie;
}

Zombie* ZombieEvent::randomChump() {
    srand (time(NULL));

    int random = rand() % 3;

    return newZombie(ZombieEvent::names[random]);
}


std::string ZombieEvent::type = "";
std::string const ZombieEvent::names[] = {"Jack", "Bitter", "Rodolph"};