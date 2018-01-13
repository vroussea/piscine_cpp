/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:38 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:38 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character {
public:
    Character(void);

    Character(std::string const & name);

    ~Character(void);

    void                recoverAP();
    void                equip(AWeapon *);
    void                attack(Enemy *);

    std::string const   getName() const;
    AWeapon             *getWeapon() const;
    int                 getAP() const;
    int                 getAPMax() const;

private:
    void                setWeapon(AWeapon *);
    void                setAP(int);
    void                setAPMax(int);

    std::string const   _name;
    AWeapon             *_weapon;
    int                 _ap;
    int                 _apMax;

    Character(Character const &src);
    Character &operator=(Character const &);

};

std::ostream &operator<<(std::ostream &o, Character const &i);


#endif
