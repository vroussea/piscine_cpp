/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:52:01 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 14:52:01 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <stdexcept>
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
public:
    AForm(std::string name, int signGrade, int exeGrade, std::string target);

    virtual ~AForm(void);

    void                beSigned(Bureaucrat const &bureaucrat);

    std::string const   getName() const;
    std::string const   getTarget() const;
    int                 getSignGrade() const;
    int                 getExecGrade() const;
    bool                isSigned() const;

    void            execute(Bureaucrat const &executor) const;

    virtual void    action(void) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

    class FormNotSignedException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

    class CannotOpenFileException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

protected:
    AForm(void) : _signGrade(0), _execGrade(0) {};

    std::string const   _name;
    int const           _signGrade;
    int const           _execGrade;
    std::string const   _target;
    bool                _signed;

private:
    AForm(AForm const &) : _signGrade(0), _execGrade(0) {};
    AForm &operator=(AForm const &);

    void                isSignGradeGood(int newGrade) const;
    void                isExecGradeGood(int newGrade) const;

};

std::ostream &operator<<(std::ostream &o, AForm const &i);


#endif
