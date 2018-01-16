/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:52:28 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 12:52:28 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char  *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade would be superior to 1.";
}

const char  *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade would be inferior to 150.";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    setGrade(grade);
}

Bureaucrat::~Bureaucrat(void) {

}

std::string const   Bureaucrat::getName() const {
    return _name;
}

int                 Bureaucrat::getGrade() const {
    return _grade;
}

void                Bureaucrat::setGrade(int newGrade) {
    if (newGrade < 1)
        throw GradeTooHighException();
    else if (newGrade > 150)
        throw GradeTooLowException();
    else
        _grade = newGrade;
}

void                Bureaucrat::incrementGrade() {
    setGrade(_grade - 1);
}

void                Bureaucrat::decrementGrade() {
    setGrade(_grade + 1);
}

void                Bureaucrat::signForm(AForm &form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signs ";
        std::cout << form.getName() << "." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << _name << " cannot sign ";
        std::cout << form.getName() << " because his ";
        std::cout << e.what() << "." << std::endl;
    }
}

void                Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << _name << " executes ";
        std::cout << form.getName() << "." << std::endl;
    }
    catch (std::exception &e) {
        std::cout << _name << " cannot execute ";
        std::cout << form.getName() << " because ";
        std::cout << e.what() << "." << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &) {
    return *this;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i) {
    o << i.getName();
    o << ", bureaucrat grade " << i.getGrade();
    o << "." << std::endl;

    return o;
}
