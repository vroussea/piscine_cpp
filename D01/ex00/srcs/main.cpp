/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:05:23 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/09 13:05:23 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>

Pony* ponyOnTheHeap(std::string ponyName, std::string ponyColor, bool isPonyOnTheHeap) {
    Pony *pony = new Pony(ponyName, ponyColor, isPonyOnTheHeap);
    pony->eat();

    return pony;
}

void ponyOnTheStack(std::string ponyName, std::string ponyColor, bool isPonyOnTheHeap) {
    Pony pony = Pony(ponyName, ponyColor, isPonyOnTheHeap);
    pony.eat();
}

int main(void) {
    ponyOnTheStack("AppleJack", "orange", false);
    Pony* pony = ponyOnTheHeap("RainbowDash", "blue", true);

    delete pony;

    return 1;
}