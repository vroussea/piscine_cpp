/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:10:35 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 18:10:35 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GITHUB_SCAVTRAP_HPP
#define GITHUB_SCAVTRAP_HPP

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class ScavTrap {
public:
    ScavTrap(void);

    ScavTrap(std::string name);

    ScavTrap(ScavTrap const &src);

    ~ScavTrap(void);

    ScavTrap &operator=(ScavTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        takeDamage(unsigned int amount);
    void                        beRepaired(unsigned int amount);
    void                        challengeNewcomer(void);

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
    static std::string const    _randomChallenges[];
    static int const            _numberOfRandomChallenges;
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &i);


#endif
