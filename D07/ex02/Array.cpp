/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 19:02:24 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/17 19:02:24 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array {
public:
/* ******************************* */
/*    Constructors & destructor    */
/* ******************************* */

    Array<T>(void) : _n(0) {
        _array = new T[0];
    }

    Array<T>(unsigned int n) : _n(n){
        _array = new T[_n];
        unsigned int    i = 0;
        while (i < _n) {
            _array[i] = 0;
            i++;
        }
    }

    Array<T>(Array const &src) : _n(src.size()) {
        _array = new T[_n];
        *this = src;
    }

    ~Array(void) {
        delete [] _array;
    }

/* ******************************* */
/*       operators  overload       */
/* ******************************* */

    Array &operator=(Array const &rhs) {
        if (this != &rhs) {
            unsigned int    i = 0;
            while (i < _n && i < rhs.size()) {
                _array[i] = rhs[i];
                i++;
            }
        }

        return *this;
    }

    T   &operator[](unsigned int const n) const {
        if (n >= _n)
            throw std::exception();
        return _array[n];
    }

/* ******************************* */
/*            Accessors            */
/* ******************************* */

    unsigned int    size(void) const {
        return _n;
    }

private:
    T                   *_array;
    unsigned int const  _n;
};