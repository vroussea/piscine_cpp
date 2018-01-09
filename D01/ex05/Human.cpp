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

Human::Human() : brain(Brain()) {
}

Human::~Human() {
}

std::string Human::identify() const {
    return this->brain.identify();
}

const Brain&      Human::getBrain() const {
    const Brain& brainRef = this->brain;
    return brainRef;
}