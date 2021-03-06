/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:34:40 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 14:34:40 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Zombie*    heapZombie() {
    ZombieEvent::setZombieType("Follower");
    Zombie*  zombie = ZombieEvent::randomChump();

    return zombie;
}

void        oneZombie() {
    Zombie  stackZombie = Zombie("Jack", "Sta(l)cker");
    stackZombie.announce();
    std::cout << "You decide not to bother killing him since he'll die as soon as you'll leave this function" << std::endl;
}

int main(void) {
    Zombie* zombie = heapZombie();

    oneZombie();

    std::cout << "You arrive at the end of the main and decide to \"delete\" ";
    std::cout << zombie->name << " the zombie following you since the beginning" << std::endl;
    delete zombie;
    return 1;
}