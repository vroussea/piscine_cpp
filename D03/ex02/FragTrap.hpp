/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:40:04 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 11:40:04 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class FragTrap {
public:
    FragTrap(void);

    FragTrap(std::string name);

    FragTrap(FragTrap const &src);

    ~FragTrap(void);

    FragTrap &operator=(FragTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        takeDamage(unsigned int amount);
    void                        beRepaired(unsigned int amount);
    void                        vaulthunter_dot_exe(std::string const & target);

    int                         getHitPoints() const;
    int                         getMaxHitPoints() const;
    int                         getEnergyPoints() const;
    int                         getMaxEnergyPoints() const;
    int                         getLevel() const;
    std::string                 getName() const;
    int                         getMeleeDamage() const;
    int                         getRangedDamage() const;
    int                         getArmor() const;
private:
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
    static int                  _fragTrapNumber;
    static std::string const    _randomAttack[];
    static int const            _numberOfRandomAttacks;
};

std::ostream &operator<<(std::ostream &o, FragTrap const &i);


#endif
