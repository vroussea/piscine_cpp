/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:50:41 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 13:50:41 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
public:
    bool            getExist(void) const;
    std::string     getFirstName(void) const;
    std::string     getLastName(void) const;
    std::string     getNickname(void) const;
    std::string     getLogin(void) const;
    std::string     getPostalAddress(void) const;
    std::string     getEmailAddress(void) const;
    std::string     getPhoneNumber(void) const;
    std::string     getBirthdayDate(void) const;
    std::string     getFavoriteMeal(void) const;
    std::string     getUnderwearColor(void) const;
    std::string     getDarkestSecret(void) const;

                    Contact(void);
                    Contact(std::string firstName,
                            std::string lastName,
                            std::string nickname,
                            std::string login,
                            std::string postalAddress,
                            std::string emailAddress,
                            std::string phoneNumber,
                            std::string birthdayDate,
                            std::string favoriteMeal,
                            std::string underwearColor,
                            std::string darkestSecret);
                    ~Contact(void);

private:
    bool            exist;
    std::string     firstName;
    std::string     lastName;
    std::string     nickname;
    std::string     login;
    std::string     postalAddress;
    std::string     emailAddress;
    std::string     phoneNumber;
    std::string     birthdayDate;
    std::string     favoriteMeal;
    std::string     underwearColor;
    std::string     darkestSecret;
};


#endif
