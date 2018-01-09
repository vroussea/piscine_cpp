/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:29:44 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 15:29:44 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n, std::string type) {
    this->zombies = new Zombie[n];
    srand (time(NULL));

    int i;

    i = 0;
    while (i < n) {
        int randomName = rand() % 11;
        zombies[i].name = ZombieHorde::_names[randomName];
        zombies[i].type = type;

        i++;
    }

    i = 0;
    while (i < n) {
        zombies[i].announce();
        i++;
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] this->zombies;
}

std::string const ZombieHorde::_names[] = {"Jack", "Bitter", "Rodolph", "Max", "Stewart", "Daniel", "Florian", "Julie", "Lucie", "Josianne", "Manuealla"};