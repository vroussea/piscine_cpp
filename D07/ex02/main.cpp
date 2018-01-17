/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 18:47:28 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/17 18:47:28 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Array.cpp"

int main(void) {
    std::cout << std::setprecision(1) << std::fixed;

    int * a = new int();
    std::cout << *a << std::endl;
    char * b = new char();
    std::cout << *b << std::endl;
    float * c = new float();
    std::cout << *c << std::endl;
    double * d = new double();
    std::cout << *d << std::endl;

    Array<char> array(1);
    array[0] = 'a';
    std::cout << array[0] << std::endl;
    try {
        array[1] = 'b';
        std::cout << array[1] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Array size : " << array.size() << std::endl;

    Array<double> array1;
    std::cout << "Array size : " << array1.size() << std::endl;

    float *tab1 = new float[4];
    tab1[0] = 0;
    tab1[1] = 1;
    tab1[2] = 2;
    tab1[3] = 3;

    Array<float> array2(4);

    for (unsigned int i = 0; i < 4; i++)
        std::cout << array2[i] << "f ";
    std::cout <<std::endl;

    array2[0] = tab1[0];
    array2[1] = tab1[1];
    array2[2] = tab1[2];
    array2[3] = tab1[3];

    for (unsigned int i = 0; i < 4; i++)
        std::cout << array2[i] << "f ";
    std::cout <<std::endl;
    std::cout << "Array size : " << array2.size() << std::endl;

    Array<float> arrayCopy(array2);

    for (unsigned int i = 0; i < 4; i++)
        std::cout << arrayCopy[i] << "f ";
    std::cout <<std::endl;
    std::cout << "Array size : " << arrayCopy.size() << std::endl;

    delete [] tab1;
    return 1;
}