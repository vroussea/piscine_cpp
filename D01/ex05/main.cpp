/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:28:13 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 17:28:13 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main()
{
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain()->identify() << std::endl;
}