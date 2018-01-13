/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:32 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:32 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle(void);

    virtual ~PlasmaRifle(void);

    virtual void        attack() const;

private:
    PlasmaRifle(int);
    PlasmaRifle(PlasmaRifle const &src);
    PlasmaRifle &operator=(PlasmaRifle const &);

};

#endif
