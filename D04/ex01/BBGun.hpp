/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BBGun.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:33:41 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/13 11:33:41 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BBGUN_HPP
#define BBGUN_HPP

#include "AWeapon.hpp"
#include <iostream>

class BBGun : public AWeapon {
public:
    BBGun(void);
    
    virtual ~BBGun(void);

    virtual void        attack() const;
    
private:
    BBGun(int);
    BBGun(BBGun const &src);
    BBGun &operator=(BBGun const &);

};

#endif
