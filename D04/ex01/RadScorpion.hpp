/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:46:37 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/12 19:46:37 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP


#include <iostream>

class RadScorpion {
public:
    RadScorpion(void);

    RadScorpion();

    RadScorpion(RadScorpion const &src);

    ~RadScorpion(void);

    RadScorpion &operator=(RadScorpion const &rhs);

private:
};

std::ostream &operator<<(std::ostream &o, RadScorpion const &i);


#endif
