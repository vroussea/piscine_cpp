/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Nerd.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:55:35 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 18:55:35 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NERD_HPP
#define NERD_HPP

#include "Victim.hpp"
#include <iostream>

class Nerd : public Victim {
public:
    Nerd(std::string name);

    Nerd(Nerd const &src);

    virtual ~Nerd(void);

    Nerd &operator=(Nerd const &rhs);

    virtual void    getPolymorphed() const;

protected:
    Nerd(void);
};

#endif
