/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:07:29 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/15 20:07:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <time.h>
#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm(std::string target);

    virtual ~RobotomyRequestForm(void);

    virtual void        action(void) const;

private:
    RobotomyRequestForm(void) {};
    RobotomyRequestForm(RobotomyRequestForm const &) {};
    RobotomyRequestForm &operator=(RobotomyRequestForm const &);
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);


#endif
