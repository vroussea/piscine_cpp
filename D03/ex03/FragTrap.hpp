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

#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

class FragTrap : public ClapTrap {
public:
    FragTrap(void);

    FragTrap(std::string name);

    FragTrap(FragTrap const &src);

    ~FragTrap(void);

    FragTrap &operator=(ClapTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        vaulthunter_dot_exe(std::string const & target);
private:

    static std::string const    _randomAttack[];
    static int const            _numberOfRandomAttacks;
};

#endif
