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

class Fixed {
public:
    Fixed(void);

    Fixed(Fixed const &src);

    ~Fixed(void);

    Fixed &operator=(Fixed const &rhs);

    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
private:
    int                 raw;
    static int const    fractionalBits;
};

#endif
