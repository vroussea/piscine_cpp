/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:51:56 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 14:51:56 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char  *AForm::GradeTooHighException::what() const throw() {
    return "grade is too high";
}

const char  *AForm::GradeTooLowException::what() const throw() {
    return "grade is too low";
}

const char  *AForm::FormNotSignedException::what() const throw() {
    return "form is not signed";
}

const char  *AForm::CannotOpenFileException::what() const throw() {
    return "cannot open file";
}

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) : _name(name), _signGrade(signGrade),
                                                                                 _execGrade(execGrade),
                                                                                 _target(target) {
    isExecGradeGood(execGrade);
    isSignGradeGood(signGrade);
    _signed = false;
}

AForm::~AForm(void) {

}

std::string const   AForm::getName() const {
    return _name;
}

std::string const   AForm::getTarget() const {
    return _target;
}

int                 AForm::getSignGrade() const {
    return _signGrade;
}

int                 AForm::getExecGrade() const {
    return _execGrade;
}

bool                AForm::isSigned() const {
    return _signed;
}

void                AForm::isSignGradeGood(int newGrade) const {
    if (newGrade < 1)
        throw AForm::GradeTooHighException();
    else if (newGrade > 150)
        throw AForm::GradeTooLowException();
}

void                AForm::isExecGradeGood(int newGrade) const {
    if (newGrade < 1)
        throw GradeTooHighException();
    else if (newGrade > 150)
        throw GradeTooLowException();
}

void                AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= _signGrade) {
        _signed = true;
    }
    else {
        throw AForm::GradeTooLowException();
    }
}

void                AForm::execute(Bureaucrat const &executor) const {
    if (!_signed)
        throw FormNotSignedException();
    if (executor.getGrade() <= _execGrade) {
        action();
    }
    else
        throw AForm::GradeTooLowException();
}

AForm &AForm::operator=(AForm const &) {
    return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &i) {
    o << i.getName();
    o << ", required grade for signing : " << i.getSignGrade();
    o << ", required grade for execution : " << i.getExecGrade();
    o << "." << std::endl;

    return o;
}
