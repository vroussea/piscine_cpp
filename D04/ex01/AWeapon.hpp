/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP


#include <iostream>

class AWeapon {
public:
    AWeapon(std::string const & name, int apcost, int damage);

    virtual ~AWeapon();

    std::string const   getName() const;
    int                 getAPCost() const;
    int                 getDamage() const;

    virtual void        attack() const = 0;
protected:
    AWeapon(void);

    void                setAPCost(int amount);
    void                setDamage(int amount);
    void                setName(std::string name);
private:
    std::string         _name;
    int                 _apCost;
    int                 _damage;

    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);
};

#endif
