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

class ZombieEvent {
public:
    static std::string type;

    ZombieEvent();
    ~ZombieEvent();

    static void        setZombieType(std::string type);
    static Zombie*     newZombie(std::string name);

};


#endif
