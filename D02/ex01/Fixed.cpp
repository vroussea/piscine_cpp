/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:48:07 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/10 13:48:07 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0b00000000){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const intValue) : _raw(intValue << Fixed::_fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatValue) : _raw(roundf(floatValue * (1 << Fixed::_fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;

}

int                 Fixed::toInt(void) const {
    return this->_raw >> Fixed::_fractionalBits;
}

float               Fixed::toFloat(void) const {
    return this->_raw / (float)(1 << Fixed::_fractionalBits);
}

void        Fixed::setRawBits(int const raw) {
    this->_raw = raw;
}

int         Fixed::getRawBits(void) const {
    return this->_raw;
}

Fixed       &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs) {
        this->_raw = rhs.getRawBits();
    }

    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();

    return o;
}

int const    Fixed::_fractionalBits = 8;