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
#include <stdlib.h>
#include <time.h>
#include <sstream>

struct Data {
    std::string s1;
    int         n;
    std::string s2;
};

void    *serialize() {
    void    *serialized_data;
    Data    *data = new Data();

    std::ostringstream ss1;
    std::ostringstream ss2;

    std::string s1;
    std::string s2;

    int min = -501;
    int max = 501;

    int n = min + (rand() % static_cast<int>(max - min + 1));

    data->n = n;

    int i = 0;
    while (i < 8) {
        char a = rand() % 255;
        if (std::isalpha(a) || std::isdigit(a)) {
            ss1 << a;
            i++;
        }
    }
    s1 = ss1.str();

    data->s1 = s1;

    i = 0;
    while (i < 8) {
        char a = rand() % 255;
        if (std::isalpha(a) || std::isdigit(a)) {
            ss2 << a;
            i++;
        }
    }
    s2 = ss2.str();

    data->s2 = s2;

    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;
    serialized_data = static_cast<void *>(data);
    return serialized_data;
}

Data    *deserialize(void * raw) {
    return reinterpret_cast<Data *>(raw);
}

int     main(void) {
    srand(time(0));
    void *serialized_data = serialize();
    Data *data = deserialize(serialized_data);

    std::cout << std::endl << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;

    delete data;
    return 1;
}