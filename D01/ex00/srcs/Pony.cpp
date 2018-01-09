/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:05:10 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 13:05:10 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string ponyName, std::string color, bool heap) : name(ponyName), color(color), heap(heap) {
    std::cout << "A new pony arrived in your field, it's name is " << this->name << ". ";
    std::cout << "It is " << this->color << "." << std::endl;
}

Pony::Pony(void) {
}

Pony::~Pony() {
    std::cout << name << " throat exploded, it is now drowning in its own blood. :D" << std::endl;
}

void    Pony::eat() {
    std::cout << this->name << " is eating ";
    if (this->heap)
        std::cout << "a delicious pear." << std::endl;
    else
        std::cout << "trash. Because it loves that." << std::endl;
}