/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:40:38 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 18:40:38 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon(void);

    void            setType(std::string type);
    std::string     getType(void) const;

private:
    std::string type;
};


#endif
