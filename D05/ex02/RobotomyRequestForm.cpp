/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:07:44 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 20:07:44 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ******************************* */
/*    Constructors & destructor    */
/* ******************************* */

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target) {
    srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

/* ******************************* */
/*       operators  overload       */
/* ******************************* */

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &) {
    return *this;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i) {
    o << i.getName();
    o << ", required grade for signing : " << i.getSignGrade();
    o << ", required grade for execution : " << i.getExecGrade();
    o << ". It is a Robotomy Request Form with " << i.getTarget();
    o << " as a target." << std::endl;

    return o;
}

/* ******************************* */
/*            Functions            */
/* ******************************* */

void        RobotomyRequestForm::action(void) const {
    int i = rand() % 2;

    std::cout << "BBBBBRRRRRRR ... VVVVRRRRRRRRRRRRRR ... DDRRR DDDRRR DRRRR";
    if (i == 0)
        std::cout << _target << " has been successfully robotomized." << std::endl;
    else
        std::cout << _target << " robotomization failed." << std::endl;
}


/* ******************************* */
/*            Accessors            */
/* ******************************* */



/* ******************************* */
/*            Exceptions           */
/* ******************************* */