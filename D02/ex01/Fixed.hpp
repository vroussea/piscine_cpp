/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:48:02 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/10 13:48:02 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed(void);

    Fixed(int const intValue);

    Fixed(float const floatValue);

    Fixed(Fixed const &src);

    ~Fixed(void);

    Fixed &operator=(Fixed const &rhs);

    int                 getRawBits(void) const;
    void                setRawBits(int const raw);

    float               toFloat(void) const;
    int                 toInt(void) const;

private:
    int                 _raw;
    static int const    _fractionalBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
