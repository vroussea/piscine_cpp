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

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(std::string target);

    virtual ~ShrubberyCreationForm(void);

    virtual void        action(void) const;

    std::string const   concatStrings(std::string const str1, std::string const str2) const;

private:
    ShrubberyCreationForm(void) {};
    ShrubberyCreationForm(ShrubberyCreationForm const &) {};
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);


#endif
