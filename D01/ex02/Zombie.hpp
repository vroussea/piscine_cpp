/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:14:22 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 14:14:22 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
    std::string name;
    std::string type;

    Zombie(std::string zombieName, std::string zombieType);
    Zombie();

    ~Zombie();
    void        announce() const;
};



#endif
