/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:07:45 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 20:07:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ******************************* */
/*    Constructors & destructor    */
/* ******************************* */

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) {

}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

/* ******************************* */
/*       operators  overload       */
/* ******************************* */

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &) {
    return *this;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i) {
    o << i.getName();
    o << ", required grade for signing : " << i.getSignGrade();
    o << ", required grade for execution : " << i.getExecGrade();
    o << ". It is a Presidential Pardon Form with " << i.getTarget();
    o << " as a target." << std::endl;

    return o;
}

/* ******************************* */
/*            Functions            */
/* ******************************* */

void        PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!_signed)
        throw FormNotSignedException();
    if (executor.getGrade() <= _execGrade) {
        std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else {
        throw Form::GradeTooLowException();
    }
}

/* ******************************* */
/*            Accessors            */
/* ******************************* */



/* ******************************* */
/*            Exceptions           */
/* ******************************* */