/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:39:02 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:39:02 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void) const;
    void    setWeapon(Weapon& weapon);

private:
    std::string name;
    Weapon*     weapon;
};


#endif
