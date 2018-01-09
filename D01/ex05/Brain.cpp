/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:28:39 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 17:28:39 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
}

Brain::~Brain() {
}

std::string Brain::identify() const {
    std::stringstream   stringStream;
    std::string         final;

    stringStream << this;

    final = stringStream.str();

    size_t i;
    i = 0;
    while (i < final.size()) {
        final[i] = std::toupper(final[i]);
        i++;
    }

    return final;
}