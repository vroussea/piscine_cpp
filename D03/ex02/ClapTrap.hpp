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

    ClapTrap();

    ClapTrap(ClapTrap const &src);

    ~ClapTrap(void);

    ClapTrap &operator=(ClapTrap const &rhs);

private:
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);


#endif
