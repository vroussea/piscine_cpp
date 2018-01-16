/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:52:41 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 12:52:41 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
public:
    Bureaucrat(std::string name, int grade);

    virtual ~Bureaucrat(void);

    std::string const   getName() const;
    int                 getGrade() const;
    void                incrementGrade();
    void                decrementGrade();

    void                signForm(AForm &form) const;

    void                executeForm(AForm const & form) const;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

private:
    Bureaucrat(void) {};
    Bureaucrat(Bureaucrat const &) {};
    Bureaucrat &operator=(Bureaucrat const &);

    void                setGrade(int newGrade);

    std::string const   _name;
    int                 _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);


#endif
