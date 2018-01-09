/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:23:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 14:23:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <stdlib.h>
#include <time.h>

class ZombieEvent {
public:
    static std::string  type;
    static std::string const  names[];

    ZombieEvent();
    ~ZombieEvent();

    static void         setZombieType(std::string type);
    static Zombie*      newZombie(std::string name);
    static Zombie*      randomChump();
};


#endif
