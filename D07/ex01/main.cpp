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
void    iter(U *array, size_t const & length, void (*func)(U &)) {
    size_t i = 0;
    while (i < length) {
        func(array[i]);
        i++;
    }
}

template<typename U>
void       myFunct(U &var) {
    var++;
}

void       myStrFunct(std::string &str) {
    if (str.size() > 0)
        str[0] = 'a';
}

int main(void) {
    void (*func1)(char &);
    func1 = &myFunct;

    size_t  sizeOfArray = 4;

    char *tab1 = new char[sizeOfArray];
    tab1[0] = 'a';
    tab1[1] = 'b';
    tab1[2] = 'c';
    tab1[3] = 'd';
    std::cout << tab1 << std::endl;
    iter<char>(tab1, sizeOfArray, func1);
    std::cout << tab1 << std::endl;

    void (*func5)(std::string &);
    func5 = &myStrFunct;

    std::string *tab5 = new std::string[sizeOfArray];
    tab5[0] = "test1";
    tab5[1] = "test2";
    tab5[2] = "test3";
    tab5[3] = "test4";
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab5[i] << " ";
    std::cout << std::endl;
    iter<std::string>(tab5, sizeOfArray, func5);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab5[i] << " ";
    std::cout << std::endl;

    void (*func2)(int &);
    func2 = &myFunct;

    int *tab2 = new int[sizeOfArray];
    tab2[0] = 1;
    tab2[1] = 2;
    tab2[2] = 3;
    tab2[3] = 4;
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;
    iter<int>(tab2, sizeOfArray, func2);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab2[i] << " ";
    std::cout << std::endl;

    std::cout << std::setprecision(1) << std::fixed;

    void (*func3)(float &);
    func3 = &myFunct;

    float *tab3 = new float[sizeOfArray];
    tab3[0] = 1;
    tab3[1] = 2;
    tab3[2] = 3;
    tab3[3] = 4;
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab3[i] << "f ";
    std::cout << std::endl;
    iter<float>(tab3, sizeOfArray, func3);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab3[i] << "f ";
    std::cout << std::endl;

    void (*func4)(double &);
    func4 = &myFunct;

    double *tab4 = new double[sizeOfArray];
    tab4[0] = 1.1;
    tab4[1] = 2.2;
    tab4[2] = 3.3;
    tab4[3] = 4.4;
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab4[i] << " ";
    std::cout << std::endl;
    iter<double>(tab4, sizeOfArray, func4);
    for (size_t i = 0; i < sizeOfArray; i++)
        std::cout << tab4[i] << " ";
    std::cout << std::endl;

    delete [] tab1;
    delete [] tab2;
    delete [] tab3;
    delete [] tab4;
}