/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:37 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:37 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy {
public:
    RadScorpion(void);

    virtual ~RadScorpion(void);

private:
    RadScorpion(int);
    RadScorpion(RadScorpion const &src);
    RadScorpion &operator=(RadScorpion const &);

};

#endif
