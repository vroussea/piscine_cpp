/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:51:17 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 19:51:17 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class ClapTrap {
public:
    ClapTrap(void);

    ClapTrap(unsigned int hitPoints,
             unsigned int maxHitPoints,
             unsigned int energyPoints,
             unsigned int maxEnergyPoints,
             int level,
             std::string name,
             unsigned int meleeDamage,
             unsigned int rangedDamage,
             unsigned int armor);

    ClapTrap(ClapTrap const &src);

    ~ClapTrap(void);

    ClapTrap &operator=(ClapTrap const &rhs);

    void                        takeDamage(unsigned int amount);
    void                        beRepaired(unsigned int amount);

    int                         getHitPoints() const;
    int                         getMaxHitPoints() const;
    int                         getEnergyPoints() const;
    int                         getMaxEnergyPoints() const;
    int                         getLevel() const;
    std::string                 getName() const;
    int                         getMeleeDamage() const;
    int                         getRangedDamage() const;
    int                         getArmor() const;

protected:
    static  std::string         intToString(int value);
    unsigned int                _hitPoints;
    unsigned int                _maxHitPoints;
    unsigned int                _energyPoints;
    unsigned int                _maxEnergyPoints;
    int                         _level;
    std::string                 _name;
    unsigned int                _meleeDamage;
    unsigned int                _rangedDamage;
    unsigned int                _armor;
    static int                  _clapTrapNumber;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);


#endif
