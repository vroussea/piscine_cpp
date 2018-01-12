/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:33 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:33 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
public:
    PowerFist(void);

    virtual ~PowerFist(void);

    virtual void        attack() const;
private:
    PowerFist(std::string const & name, int apcost, int damage);
    PowerFist &operator=(PowerFist const &rhs);
    PowerFist(PowerFist const &src);
};

#endif
