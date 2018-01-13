/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:35:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 14:35:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad {
public:
    Squad(void);

    Squad(ISquad const &src);

    virtual ~Squad(void);

    virtual int             getCount() const;
    virtual ISpaceMarine*   getUnit(int) const;
    virtual int             push(ISpaceMarine*);

    virtual Squad &operator=(ISquad const &src);

private:
    Squad(int);

    int                     _nbUnits;
    ISpaceMarine            **_marines;

    void                    realloc_marines();
};

#endif
