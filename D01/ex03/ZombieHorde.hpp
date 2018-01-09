/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:29:49 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 15:29:49 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

class ZombieHorde {
public:
    ZombieHorde(int n, std::string type);
    ~ZombieHorde();

    int                         nbZombies;
    static std::string const    _names[];
    Zombie                      *zombies;
};


#endif
