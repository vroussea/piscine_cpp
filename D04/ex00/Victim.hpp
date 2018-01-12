/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:02:44 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 17:02:44 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
public:
    Victim(std::string name);

    Victim(Victim const &src);

    virtual ~Victim(void);

    Victim &operator=(Victim const &rhs);

    virtual void    getPolymorphed() const;

    std::string     getName() const;
protected:
    std::string _name;
    Victim(void);
};

std::ostream &operator<<(std::ostream &o, Victim const &i);

#endif
