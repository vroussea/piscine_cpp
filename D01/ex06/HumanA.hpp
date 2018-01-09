/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:38:33 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:38:33 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);

    void    attack(void) const;
    void    setWeapon(Weapon weapon);

private:
    std::string name;
    Weapon&     weapon;
};


#endif
