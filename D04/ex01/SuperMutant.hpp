/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy {
public:
    SuperMutant(void);

    virtual ~SuperMutant(void);

    virtual void        takeDamage(int);

private:
    SuperMutant(int);
    SuperMutant(SuperMutant const &src);
    SuperMutant &operator=(SuperMutant const &);

};

#endif
