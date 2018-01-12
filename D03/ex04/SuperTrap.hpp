/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:39:05 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 13:39:05 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class SuperTrap : public NinjaTrap, public FragTrap {
public:
    SuperTrap(void);

    SuperTrap(std::string name);

    SuperTrap(SuperTrap const &src);

    ~SuperTrap(void);

    SuperTrap &operator=(ClapTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
};

std::ostream &operator<<(std::ostream &o, SuperTrap const &i);


#endif
