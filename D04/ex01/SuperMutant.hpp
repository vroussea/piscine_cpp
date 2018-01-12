/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP


#include <iostream>

class SuperMutant {
public:
    SuperMutant(void);

    SuperMutant();

    SuperMutant(SuperMutant const &src);

    ~SuperMutant(void);

    SuperMutant &operator=(SuperMutant const &rhs);

private:
};

std::ostream &operator<<(std::ostream &o, SuperMutant const &i);


#endif
