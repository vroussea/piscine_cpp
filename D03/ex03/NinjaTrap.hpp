/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:51:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 21:51:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap(void);

    NinjaTrap(std::string name);

    NinjaTrap(NinjaTrap const &src);

    ~NinjaTrap(void);

    NinjaTrap &operator=(ClapTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        ninjaShoebox(ClapTrap & target);
    void                        ninjaShoebox(ScavTrap & target);
    void                        ninjaShoebox(FragTrap & target);
    void                        ninjaShoebox(NinjaTrap & target);
};

#endif
