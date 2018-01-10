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

Fixed::Fixed(void) : _rawBits(0b00000000) {
}

Fixed::Fixed(int const intValue) : _rawBits(intValue << Fixed::_fractionalBits) {
}

Fixed::Fixed(float const floatValue) : _rawBits(roundf(floatValue * (1 << Fixed::_fractionalBits))) {
}

Fixed::Fixed(Fixed const &src) {
    *this = src;
}

Fixed::~Fixed(void) {
}

int                 Fixed::toInt(void) const {
    return this->_rawBits >> Fixed::_fractionalBits;
}

float               Fixed::toFloat(void) const {
    return this->_rawBits / (float)(1 << Fixed::_fractionalBits);
}

void            Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

int             Fixed::getRawBits(void) const {
    return this->_rawBits;
}

Fixed           &Fixed::operator=(Fixed const &rhs) {
    if (this != &rhs) {
        this->_rawBits = rhs.getRawBits();
    }

    return *this;
}

bool            Fixed::operator<(Fixed const &rhs) const {
    return (this->_rawBits < rhs.getRawBits());
}

bool            Fixed::operator>(Fixed const &rhs) const {
    return (this->_rawBits > rhs.getRawBits());
}

bool            Fixed::operator<=(Fixed const &rhs) const {
    return (this->_rawBits <= rhs.getRawBits());
}

bool            Fixed::operator>=(Fixed const &rhs) const {
    return (this->_rawBits >= rhs.getRawBits());
}

bool            Fixed::operator==(Fixed const &rhs) const {
    return (this->_rawBits == rhs.getRawBits());
}

bool            Fixed::operator!=(Fixed const &rhs) const {
    return (this->_rawBits != rhs.getRawBits());
}

Fixed           Fixed::operator+(Fixed const &rhs) const {
    Fixed   tmp(*this);

    tmp._rawBits += rhs.getRawBits();

    return tmp;
}

Fixed           Fixed::operator-(Fixed const &rhs) const {
    Fixed   tmp(*this);

    tmp._rawBits -= rhs.getRawBits();

    return tmp;
}

Fixed           Fixed::operator*(Fixed const &rhs) const {
    Fixed   tmp(*this);

    tmp._rawBits *= rhs.getRawBits();
    tmp._rawBits /= (1 << Fixed::_fractionalBits);

    return tmp;
}

Fixed           Fixed::operator/(Fixed const &rhs) const {
    Fixed   tmp(*this);

    tmp._rawBits *= (1 << Fixed::_fractionalBits);
    tmp._rawBits /= rhs.getRawBits();

    return tmp;
}

Fixed           &Fixed::operator++(void) {
    this->_rawBits++;

    return *this;
}

Fixed           Fixed::operator++(int dummy) {
    Fixed   tmp(*this);

    dummy++;
    this->_rawBits++;

    return tmp;
}

Fixed           &Fixed::operator--(void) {
    this->_rawBits--;

    return *this;
}

Fixed           Fixed::operator--(int dummy) {
    Fixed   tmp(*this);

    dummy--;
    this->_rawBits--;

    return tmp;
}

Fixed           &Fixed::min(Fixed & a, Fixed & b) {
    return (a < b ? a : b);
}

Fixed const     &Fixed::min(Fixed const & a, Fixed const & b) {
    return (a < b ? a : b);
}

Fixed           &Fixed::max(Fixed & a, Fixed & b) {
    return (a > b ? a : b);
}

Fixed const     &Fixed::max(Fixed const & a, Fixed const & b) {
    return (a > b ? a : b);
}

std::ostream    &operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();

    return o;
}

int const    Fixed::_fractionalBits = 8;