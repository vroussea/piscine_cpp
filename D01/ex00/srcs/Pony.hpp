/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:05:04 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 13:05:04 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony {
public:
    Pony(std::string ponyName, std::string color, bool heap);
    Pony();
    ~Pony();

    std::string  name;
    std::string  color;
    bool    heap;

    void    eat();
};


#endif
