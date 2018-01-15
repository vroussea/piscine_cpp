/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:51:56 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 14:51:56 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char  *Form::GradeTooHighException::what() const throw() {
    return "grade is too high";
}

const char  *Form::GradeTooLowException::what() const throw() {
    return "grade is too low";
}

const char  *Form::FormNotSignedException::what() const throw() {
    return "form is not signed";
}

Form::Form(std::string name, int signGrade, int execGrade, std::string target) : _name(name), _signGrade(signGrade),
                                                                                 _execGrade(execGrade),
                                                                                 _target(target) {
    isExecGradeGood(execGrade);
    isSignGradeGood(signGrade);
    _signed = false;
}

Form::~Form(void) {

}

std::string const   Form::getName() const {
    return _name;
}

std::string const   Form::getTarget() const {
    return _target;
}

int                 Form::getSignGrade() const {
    return _signGrade;
}

int                 Form::getExecGrade() const {
    return _execGrade;
}

bool                Form::isSigned() const {
    return _signed;
}

void                Form::isSignGradeGood(int newGrade) const {
    if (newGrade < 1)
        throw Form::GradeTooHighException();
    else if (newGrade > 150)
        throw Form::GradeTooLowException();
}

void                Form::isExecGradeGood(int newGrade) const {
    if (newGrade < 1)
        throw GradeTooHighException();
    else if (newGrade > 150)
        throw GradeTooLowException();
}

void                Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= _signGrade) {
        _signed = true;
    }
    else {
        throw Form::GradeTooLowException();
    }
}

Form &Form::operator=(Form const &) {
    return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i) {
    o << i.getName();
    o << ", required grade for signing : " << i.getSignGrade();
    o << ", required grade for execution : " << i.getExecGrade();
    o << "." << std::endl;

    return o;
}
