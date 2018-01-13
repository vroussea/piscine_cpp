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
    Enemy(int hp, std::string const & type);

    virtual ~Enemy(void);

    virtual void        takeDamage(int);

    std::string const   getType() const;
    int                 getHP() const;


protected:
    Enemy &operator=(Enemy const &);
    Enemy(Enemy const &src);
    Enemy(void);

private:
    void                setHP(int);

    std::string const   _type;
    int                 _hp;
};

#endif
