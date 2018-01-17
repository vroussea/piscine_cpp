/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:49:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/17 17:49:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename U>
void    iter(U array, size_t const & length, void (*func)(U)) {
    size_t i = 0;
    while (i < length) {
        func(&array[i]);
        i++;
    }
}

template<typename U>
void       myFunct(U *var) {
    (*var)++;
}

void       myStrFunct(std::string *str) {
    if ((*str).size() > 0)
        (*str)[0] = 'a';
}

int main(void) {
    size_t  sizeOfArray = 4;

    char tab1[] = {'a', 'b', 'c', 'd'};
    std::cout << tab1 << std::endl;
    iter<char*>(tab1, sizeOfArray, &myFunct);
    std::cout << tab1 << std::endl;

    std::string tab5[] = {"test1", "test2", "test3", "test4"};
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab5[i] << " ";
    std::cout << std::endl;
    iter<std::string*>(tab5, sizeOfArray, &myStrFunct);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab5[i] << " ";
    std::cout << std::endl;

    int tab2[] = {1, 2, 3, 4};
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;
    iter<int*>(tab2, sizeOfArray, &myFunct);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;

    std::cout << std::setprecision(1) << std::fixed;

    float tab3[] = {1, 2, 3, 4};
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab3[i] << "f ";
    std::cout << std::endl;
    iter<float*>(tab3, sizeOfArray, &myFunct);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab3[i] << "f ";
    std::cout << std::endl;

    double tab4[] = {1.1, 2.1, 3.1, 4.1};
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab4[i] << " ";
    std::cout << std::endl;
    iter<double*>(tab4, sizeOfArray, &myFunct);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab4[i] << " ";
    std::cout << std::endl;
}