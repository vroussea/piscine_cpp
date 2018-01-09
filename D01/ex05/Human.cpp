/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:28:25 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 17:28:25 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
    this->brain = new Brain();
}

Human::~Human() {
    delete this->brain;
}

std::string Human::identify() const {
    return this->brain->identify();
}

Brain*   Human::getBrain() const {
    return this->brain;
}