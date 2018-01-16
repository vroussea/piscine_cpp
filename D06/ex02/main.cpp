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

class Base {
public:
    virtual ~Base() {};
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

Base * generate(void) {
    int random = rand() % 3;
    if (random == 2) {
        A *a = new A;
        std::cout << "Creating A class" << std::endl;
        return static_cast<Base *>(a);
    }
    else if (random == 1) {
        B *b = new B;
        std::cout << "Creating B class" << std::endl;
        return static_cast<Base *>(b);
    }
    else {
        C *c = new C;
        std::cout << "Creating C class" << std::endl;
        return static_cast<Base *>(c);
    }

}

void identify_from_pointer( Base * p ) {
    A *trueA = dynamic_cast<A *>(p);
    B *trueB = dynamic_cast<B *>(p);

    if (trueA != nullptr)
        std::cout << "A" << std::endl;
    else if (trueB != nullptr)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p ) {
    try {
        A &trueA = dynamic_cast<A &>(p);
        trueA = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &bad_cast) {
        try {
            B &trueB = dynamic_cast<B &>(p);
            trueB = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::bad_cast &bad_cast) {
            std::cout << "C" << std::endl;
        }
    }
}

int     main(void) {
    srand(time(0));

    Base *whatIsIt = generate();

    identify_from_pointer(whatIsIt);
    identify_from_reference(*whatIsIt);

    delete whatIsIt;
    return 1;
}