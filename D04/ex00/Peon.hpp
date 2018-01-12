/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:05:03 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 17:05:03 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string name);

    Peon(Peon const &src);

    virtual ~Peon(void);

    Peon &operator=(Peon const &rhs);

    virtual void    getPolymorphed() const;

protected:
    Peon(void);
};

#endif
