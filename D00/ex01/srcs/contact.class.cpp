/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:50:45 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 13:50:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact() {
    this->exist = false;
}

Contact::Contact(std::string firstName,
                 std::string lastName,
                 std::string nickname,
                 std::string login,
                 std::string postalAddress,
                 std::string emailAddress,
                 std::string phoneNumber,
                 std::string birthdayDate,
                 std::string favoriteMeal,
                 std::string underwearColor,
                 std::string darkestSecret) {

    this->exist = true;
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->login = login;
    this->postalAddress = postalAddress;
    this->emailAddress = emailAddress;
    this->phoneNumber = phoneNumber;
    this->birthdayDate = birthdayDate;
    this->favoriteMeal = favoriteMeal;
    this->underwearColor = underwearColor;
    this->darkestSecret = darkestSecret;
}

Contact::~Contact() {
    return ;
}

bool Contact::getExist(void) const{
    return this->exist;
}

std::string Contact::getFirstName(void) const{
    return this->firstName;
}

std::string Contact::getLastName(void) const{
    return this->lastName;
}

std::string Contact::getNickname(void) const{
    return this->nickname;
}

std::string Contact::getLogin(void) const{
    return this->login;
}

std::string Contact::getPostalAddress(void) const{
    return this->postalAddress;
}

std::string Contact::getEmailAddress(void) const{
    return this->emailAddress;
}

std::string Contact::getPhoneNumber(void) const{
    return this->phoneNumber;
}

std::string Contact::getBirthdayDate(void) const{
    return this->birthdayDate;
}

std::string Contact::getFavoriteMeal(void) const{
    return this->favoriteMeal;
}

std::string Contact::getUnderwearColor(void) const{
    return this->underwearColor;
}

std::string Contact::getDarkestSecret(void) const{
    return this->darkestSecret;
}