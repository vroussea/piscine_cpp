/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:38:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/16 14:38:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <float.h>
#include <limits.h>
#include <iomanip>

bool is_inf_or_nan(double x)
{
    return !(x <= DBL_MAX && x >= -DBL_MAX);
}

int main(int ac, char **av) {
    if (ac == 2) {
        double  d = std::strtod(av[1], nullptr);
        int     b = static_cast<int>(d);
        char    a = static_cast<char>(b);
        float   c = static_cast<float>(d);

        if (is_inf_or_nan(d)) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else {
            if (b > UCHAR_MAX || b < 0)
                std::cout << "char: impossible" << std::endl;
            else if (std::isprint(a))
                    std::cout << "char: '" << a << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            if (d > INT_MAX || d < INT_MIN)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << b << std::endl;
        }

        std::cout << "float: " << std::setprecision(1) << std::fixed << c << "f" << std::endl;
        std::cout << "double: " << d << std::endl;

    }
    else {
        std::cout << "wrong number of arguments" << std::endl;
        return 0;
    }
    return 1;
}