/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:03:52 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:03:52 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine(void);

    virtual ~TacticalMarine();

    virtual TacticalMarine* clone() const;

    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

private:
    TacticalMarine(int);
    TacticalMarine(TacticalMarine const &src);
    TacticalMarine &operator=(TacticalMarine const &);
};

#endif
