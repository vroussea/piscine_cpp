/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:28:15 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 17:28:15 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
    Human();
    ~Human();

    int             getSize() const;
    int             getStrength() const;
    const Brain&          getBrain() const;

    std::string     identify() const;
private:
    Brain const     brain;
};


#endif
