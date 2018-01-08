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
    return ;
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

Contact     Contact::create(void) {
    Contact     newContact;
    std::string field;

    newContact.exist = true;

    std::cout << "CREATING CONTACT :" << std::endl << std::endl;

    std::cout << "first name : ";
    std::cin >> field;
    newContact.firstName = field;

    std::cout << "last name : ";
    std::cin >> field;
    newContact.lastName = field;

    std::cout << "nickname : ";
    std::cin >> field;
    newContact.nickname = field;

    std::cout << "login : ";
    std::cin >> field;
    newContact.login = field;

    std::cout << "postal address : ";
    std::cin >> field;
    newContact.postalAddress = field;

    std::cout << "email address : ";
    std::cin >> field;
    newContact.emailAddress = field;

    std::cout << "phone number : ";
    std::cin >> field;
    newContact.phoneNumber = field;

    std::cout << "birthday date : ";
    std::cin >> field;
    newContact.birthdayDate = field;

    std::cout << "favorite meal : ";
    std::cin >> field;
    newContact.favoriteMeal = field;

    std::cout << "underwear color : ";
    std::cin >> field;
    newContact.underwearColor = field;

    std::cout << "darkest secret : ";
    std::cin >> field;
    newContact.darkestSecret = field;

    std::cout << std::endl << "CONTACT CREATED" << std::endl << std::endl;

    return newContact;
}