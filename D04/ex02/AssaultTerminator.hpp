/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:11:20 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:11:20 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator(void);

    virtual ~AssaultTerminator();

    virtual AssaultTerminator* clone() const;

    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

private:
    AssaultTerminator(int);
    AssaultTerminator(AssaultTerminator const &src);
    AssaultTerminator &operator=(AssaultTerminator const &);
};

#endif
