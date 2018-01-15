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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    testSchrub() {
    Bureaucrat bureaucrat1("1", 137);
    std::cout << bureaucrat1;
    ShrubberyCreationForm form1("test");
    std::cout << form1;
    bureaucrat1.signForm(form1);
    bureaucrat1.executeForm(form1);
    std::cout << std::endl;

    Bureaucrat bureaucrat2("1", 137);
    std::cout << bureaucrat2;
    ShrubberyCreationForm form2("test");
    std::cout << form2;
    bureaucrat2.executeForm(form2);
    std::cout << std::endl;

    Bureaucrat bureaucrat3("1", 138);
    std::cout << bureaucrat3;
    ShrubberyCreationForm form3("test");
    std::cout << form3;
    bureaucrat3.signForm(form3);
    bureaucrat3.executeForm(form3);
    std::cout << std::endl;

    Bureaucrat bureaucrat4("1", 146);
    std::cout << bureaucrat4;
    ShrubberyCreationForm form4("test");
    std::cout << form4;
    bureaucrat4.signForm(form4);
    bureaucrat4.executeForm(form4);
    std::cout << std::endl;
}

void    testRobo() {
    Bureaucrat bureaucrat1("1", 45);
    std::cout << bureaucrat1;
    RobotomyRequestForm form1("test");
    std::cout << form1;
    bureaucrat1.signForm(form1);
    bureaucrat1.executeForm(form1);
    std::cout << std::endl;

    Bureaucrat bureaucrata("1", 45);
    std::cout << bureaucrata;
    RobotomyRequestForm forma("test");
    std::cout << forma;
    bureaucrata.signForm(forma);
    bureaucrata.executeForm(forma);
    std::cout << std::endl;

    Bureaucrat bureaucratb("1", 45);
    std::cout << bureaucratb;
    RobotomyRequestForm formb("test");
    std::cout << formb;
    bureaucratb.signForm(formb);
    bureaucratb.executeForm(formb);
    std::cout << std::endl;

    Bureaucrat bureaucrat2("1", 45);
    std::cout << bureaucrat2;
    RobotomyRequestForm form2("test");
    std::cout << form2;
    bureaucrat2.executeForm(form2);
    std::cout << std::endl;

    Bureaucrat bureaucrat3("1", 72);
    std::cout << bureaucrat3;
    RobotomyRequestForm form3("test");
    std::cout << form3;
    bureaucrat3.signForm(form3);
    bureaucrat3.executeForm(form3);
    std::cout << std::endl;

    Bureaucrat bureaucrat4("1", 73);
    std::cout << bureaucrat4;
    RobotomyRequestForm form4("test");
    std::cout << form4;
    bureaucrat4.signForm(form4);
    bureaucrat4.executeForm(form4);
    std::cout << std::endl;
}

void    testPresi() {
    Bureaucrat bureaucrat1("1", 5);
    std::cout << bureaucrat1;
    PresidentialPardonForm form1("test");
    std::cout << form1;
    bureaucrat1.signForm(form1);
    bureaucrat1.executeForm(form1);
    std::cout << std::endl;

    Bureaucrat bureaucrat2("1", 5);
    std::cout << bureaucrat2;
    PresidentialPardonForm form2("test");
    std::cout << form2;
    bureaucrat2.executeForm(form2);
    std::cout << std::endl;

    Bureaucrat bureaucrat3("1", 25);
    std::cout << bureaucrat3;
    PresidentialPardonForm form3("test");
    std::cout << form3;
    bureaucrat3.signForm(form3);
    bureaucrat3.executeForm(form3);
    std::cout << std::endl;

    Bureaucrat bureaucrat4("1", 26);
    std::cout << bureaucrat4;
    PresidentialPardonForm form4("test");
    std::cout << form4;
    bureaucrat4.signForm(form4);
    bureaucrat4.executeForm(form4);
    std::cout << std::endl;
}

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

    std::cout << std::endl << "Testing forms." << std::endl << std::endl;

    testSchrub();
    testPresi();
    testRobo();

    return 1;
}