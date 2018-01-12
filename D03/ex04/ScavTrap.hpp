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

#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(void);

    ScavTrap(std::string name);

    ScavTrap(ScavTrap const &src);

    ~ScavTrap(void);

    ScavTrap &operator=(ClapTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        challengeNewcomer(void);
private:
    static std::string const    _randomChallenges[];
    static int const            _numberOfRandomChallenges;
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &i);

#endif
