/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:07:30 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 20:07:30 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);

    virtual ~PresidentialPardonForm(void);

    virtual void        execute(Bureaucrat const &executor) const;

private:
    PresidentialPardonForm(void) {};
    PresidentialPardonForm(PresidentialPardonForm const &);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &);

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);


#endif
