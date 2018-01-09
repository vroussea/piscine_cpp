/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:14:25 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 14:14:25 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName, std::string zombieType) : name(zombieName), type(zombieType) {
    announce();
}

Zombie::~Zombie() {
    std::cout << "<" << this->name;
    std::cout << " (" << this->type;
    std::cout << ")>  Died" << std::endl;
}

void    Zombie::announce() const {
    std::cout << "<" << this->name;
    std::cout << " (" << this->type;
    std::cout << ")>  Braiiiiiiinnnssss..." << std::endl;
}