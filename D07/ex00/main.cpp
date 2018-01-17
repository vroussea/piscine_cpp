/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:01:03 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/17 16:01:03 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T>
void    swap(T &arg1, T &arg2) {
    T   tmp;
    tmp = arg2;
    arg2 = arg1;
    arg1 = tmp;
}

template <typename T>
T const &max(T const &arg1, T const &arg2) {
    return (arg1 > arg2 ? arg1 : arg2);
}

template <typename T>
T const &min(T const &arg1, T const &arg2) {
    return (arg1 < arg2 ? arg1 : arg2);
}

int     main(void) {
    int i1 = 0;
    int i2 = 1;

    std::cout << "int 1  = " << i1 << std::endl;
    std::cout << "int 2  = " << i2 << std::endl;
    std::cout << "swap" << std::endl;
    swap<int>(i1, i2);

    std::cout << "int 1  = " << i1 << std::endl;
    std::cout << "int 2  = " << i2 << std::endl;

    std::cout << "max between " << i1 << " and " << i2 << " : " << max<int>(i1, i2) << std::endl;
    std::cout << "max between " << i1 << " and " << i1 << " : " << max<int>(i1, i1) << std::endl;
    std::cout << "min between " << i1 << " and " << i2 << " : " << min<int>(i1, i2) << std::endl;
    std::cout << "min between " << i1 << " and " << i1 << " : " << min<int>(i1, i1) << std::endl;

    char a1 = 97;
    char a2 = 98;

    std::cout << "char 1  = " << a1 << std::endl;
    std::cout << "char 2  = " << a2 << std::endl;
    std::cout << "swap" << std::endl;
    swap<char>(a1, a2);

    std::cout << "char 1  = " << a1 << std::endl;
    std::cout << "char 2  = " << a2 << std::endl;

    std::cout << "max between " << a1 << " and " << a2 << " : " << max<char>(a1, a2) << std::endl;
    std::cout << "max between " << a1 << " and " << a1 << " : " << max<char>(a1, a1) << std::endl;
    std::cout << "min between " << a1 << " and " << a2 << " : " << min<char>(a1, a2) << std::endl;
    std::cout << "min between " << a1 << " and " << a1 << " : " << min<char>(a1, a1) << std::endl;

    float f1 = 0.1f;
    float f2 = 1.1;

    std::cout << "float 1  = " << std::setprecision(1) << std::fixed << f1 << "f" << std::endl;
    std::cout << "float 2  = " << f2 << "f" << std::endl;
    std::cout << "swap" << std::endl;
    swap<float>(f1, f2);

    std::cout << "float 1  = " << f1 << "f" << std::endl;
    std::cout << "float 2  = " << f2 << "f" << std::endl;

    std::cout << "max between " << f1 << "f" << " and " << f2 << "f" << " : " << max<float>(f1, f2) << std::endl;
    std::cout << "max between " << f1 << "f" << " and " << f1 << "f" << " : " << max<float>(f1, f1) << std::endl;
    std::cout << "min between " << f1 << "f" << " and " << f2 << "f" << " : " << min<float>(f1, f2) << std::endl;
    std::cout << "min between " << f1 << "f" << " and " << f1 << "f" << " : " << min<float>(f1, f1) << std::endl;

    double d1 = 0;
    double d2 = 1;

    std::cout << "double 1  = " << d1 << std::endl;
    std::cout << "double 2  = " << d2 << std::endl;
    std::cout << "swap" << std::endl;
    swap<double>(d1, d2);

    std::cout << "double 1  = " << d1 << std::endl;
    std::cout << "double 2  = " << d2 << std::endl;

    std::cout << "max between " << d1 << " and " << d2 << " : " << max<double>(d1, d2) << std::endl;
    std::cout << "max between " << d1 << " and " << d1 << " : " << max<double>(d1, d1) << std::endl;
    std::cout << "min between " << d1 << " and " << d2 << " : " << min<double>(d1, d2) << std::endl;
    std::cout << "min between " << d1 << " and " << d1 << " : " << min<double>(d1, d1) << std::endl;
    return 1;
}