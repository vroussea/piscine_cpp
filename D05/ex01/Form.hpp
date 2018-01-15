/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:52:01 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 14:52:01 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <stdexcept>
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
public:
    Form(std::string name, int signGrade, int exeGrade);

    virtual ~Form(void);

    void                beSigned(Bureaucrat const &bureaucrat);

    std::string const   getName() const;
    int                 getSignGrade() const;
    int                 getExecGrade() const;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

private:
    Form(void) : _signGrade(0), _execGrade(0) {};
    Form(Form const &) : _signGrade(0), _execGrade(0) {};
    Form &operator=(Form const &);

    void                isSignGradeGood(int newGrade) const;
    void                isExecGradeGood(int newGrade) const;

    std::string const   _name;
    int const           _signGrade;
    int const           _execGrade;
    bool                _signed;
};

std::ostream &operator<<(std::ostream &o, Form const &i);


#endif
