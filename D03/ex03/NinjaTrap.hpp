/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:51:36 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/11 21:51:36 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP


<iostream>

class NinjaTrap {
public:
    NinjaTrap(void);

    NinjaTrap(std::string name);

    NinjaTrap(NinjaTrap const &src);

    ~NinjaTrap(void);

    NinjaTrap &operator=(NinjaTrap const &rhs);

    void                        rangedAttack(std::string const & target) const;
    void                        meleeAttack(std::string const & target) const;
    void                        vaulthunter_dot_exe(std::string const & target);
};

#endif
