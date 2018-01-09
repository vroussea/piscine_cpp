/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:04:32 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 17:04:32 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string     brain = "HI THIS IS BRAIN";
    std::string*    brain_ptr = &brain;
    std::string&    brain_ref = brain;

    std::cout << *brain_ptr << std::endl;
    std::cout << brain_ref << std::endl;
    return 1;
}