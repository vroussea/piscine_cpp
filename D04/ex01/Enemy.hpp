/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:35 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:35 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP


#include <iostream>

class Enemy {
public:
    Enemy(void);

    Enemy();

    Enemy(Enemy const &src);

    ~Enemy(void);

    Enemy &operator=(Enemy const &rhs);

private:
};

std::ostream &operator<<(std::ostream &o, Enemy const &i);


#endif
