/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:29:01 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 16:29:01 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);

    Sorcerer(Sorcerer const &src);

    ~Sorcerer(void);

    Sorcerer &operator=(Sorcerer const &rhs);

    void        polymorph(Victim const &victim) const;

    std::string getName() const;
    std::string getTitle() const;
private:
    Sorcerer(void);

    std::string _name;
    std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &i);

#endif
