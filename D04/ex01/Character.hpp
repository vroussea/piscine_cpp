/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:38 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:38 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>

class Character {
public:
    Character(void);

    Character();

    Character(Character const &src);

    ~Character(void);

    Character &operator=(Character const &rhs);

private:
};

std::ostream &operator<<(std::ostream &o, Character const &i);


#endif
