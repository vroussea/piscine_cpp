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
#include "ZombieHorde.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void            oneSmallHorde() {
    srand (time(NULL));

    int random = rand() % 3 + 2;

    ZombieHorde zombieHorde = ZombieHorde(random, "Sugar");
    std::cout << "Oh no ! Another small stack horde appears, you run to avoid them, they'll die for sure when you exit this function" << std::endl;
    std::string choice;
    std::cin >> choice;

}

ZombieHorde*    twoSmallHordes() {

    srand (time(NULL));

    int random = rand() % 3 + 2;

    ZombieHorde zombieHorde1 = ZombieHorde(random, "Banana");

    random = rand() % 3 + 2;

    ZombieHorde *zombieHorde2 = new ZombieHorde(random, "Chocolate");

    std::cout << "Two small stack hordes have appeared, maybe you should run in order to avoid them ?" << std::endl;
    std::string choice;
    std::cin >> choice;
    oneSmallHorde();

    std::cout << "You keep running to kill the two remaining hordes" << std::endl;
    std::cin >> choice;

    return zombieHorde2;
}

int main(void) {
    srand (time(NULL));

    int random = rand() % 15 + 6;

    ZombieHorde *zombieHorde = new ZombieHorde(random, "Peanut");
    std::cout << "A big horde of zombies appears in front of you, you use all your ammo to kill them" << std::endl;
    std::string choice;
    std::cin >> choice;

    delete zombieHorde;
    zombieHorde = twoSmallHordes();
    std::cout << "The chocolate horde was on the heap and did not die ! You quickly grab an object and try to kill them" << std::endl;
    std::cin >> choice;
    delete zombieHorde;
    std::cout << "HOORAY !!! You killed all of them, no more zombies are in the ar... wait, what was that noise ?" << std::endl;
    std::cin >> choice;

    random = rand() % 15 + 6;

    ZombieHorde zombieHorde2 = ZombieHorde(random, "Lollipop");
    std::cout << "So much zombies, you just decide to leave this area since you're close to the main return now." << std::endl;
    std::cin >> choice;

    return 1;
}