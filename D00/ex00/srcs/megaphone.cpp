/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:48:47 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 11:48:47 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

int main(int ac, char **av) {
    std::stringstream   stringStream;
    std::string         final;
    int                 i;
    size_t              j;

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        i = 1;
        while (i < ac) {
            j = 0;
            while (j < std::strlen(av[i])) {
                av[i][j] = std::toupper(av[i][j]);
                j++;
            }
            stringStream << av[i];
            i++;
        }
        final = stringStream.str();
        std::cout << final << std::endl;
    }
    return 1;
}