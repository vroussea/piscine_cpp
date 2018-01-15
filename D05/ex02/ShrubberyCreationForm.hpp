/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:07:27 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 20:07:27 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string target);

    virtual ~ShrubberyCreationForm(void);

    virtual void        execute(Bureaucrat const &executor) const;

    std::string const   concatStrings(std::string const str1, std::string const str2) const;

    class CannotOpenFileException : public std::exception {
    public:
        virtual const char  *what() const throw();
    };

private:
    ShrubberyCreationForm(void) {};
    ShrubberyCreationForm(ShrubberyCreationForm const &) {};
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);


#endif
