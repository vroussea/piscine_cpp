/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:15:22 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 13:15:22 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat jack("jack", 1);
        std::cout << jack;
        jack.decrementGrade();
        std::cout << jack;
        jack.incrementGrade();
        std::cout << jack;
        jack.incrementGrade();
        std::cout << jack;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat bob("bob", 0);
        std::cout << bob;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat mark("mark", 150);
        std::cout << mark;
        mark.incrementGrade();
        std::cout << mark;
        mark.decrementGrade();
        std::cout << mark;
        mark.decrementGrade();
        std::cout << mark;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat *jay;

    try {
        Bureaucrat *jay = new Bureaucrat("jay", 151);
        std::cout << *jay;
    }
    catch (std::exception &e) {
        delete jay;
        std::cout << e.what() << std::endl;
    }

    return 1;
}