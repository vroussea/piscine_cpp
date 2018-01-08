/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:51:12 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 13:51:12 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"

Phone_book::Phone_book(void) {
    return;
}

void Phone_book::add(Contact contact, size_t index) {
    std::cout << "You replaced contact at index " << index << std::endl << std::endl;
    this->contacts[index] = contact;
}

std::string Phone_book::resizeString(std::string str) {
    str.resize(9);
    str.resize(10, '.');

    return str;
}

void        Phone_book::displayAll() {
    int index;
    Contact contact;
    std::string firstName;
    std::string lastName;
    std::string nickname;

    index = 0;
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "index" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "First Name" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "Last Name" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "Nickname" << std::endl;
    while (index < 8) {
        contact = this->contacts[index];
        firstName = contact.getFirstName();
        if (firstName.size() > 10)
            firstName = resizeString(firstName);
        lastName = contact.getLastName();
        if (lastName.size() > 10)
            lastName = resizeString(lastName);
        nickname = contact.getNickname();
        if (nickname.size() > 10)
            nickname = resizeString(nickname);
        if (contact.getExist()) {
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << index << "|";
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << firstName << "|";
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << lastName << "|";
            std::cout << std::setfill(' ') << std::setw(10);
            std::cout << nickname << std::endl;
        }
        index++;
    }
}

void        Phone_book::displayOne() {
    int         index;
    Contact     contact;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string user_input;
    std::stringstream ss;

    std::cout << "Enter desired contact index to display information : ";
    std::cin >> user_input;
    std::cout << std::endl;

    const char* DIGITS = "0123456789";
    size_t notaDigit = user_input.find_first_not_of(DIGITS);

    if (notaDigit != std::string::npos)
        std::cout << "This index does not exist, please try again !" << std::endl << std::endl;
    else {
        index = 0;
        {
            ss << user_input;
            ss >> index;
        }

        if (index > 7)
            std::cout << "This index does not exist, please try again !" << std::endl << std::endl;
        else {
            contact = this->contacts[index];
            if (!contact.getExist()) {
                std::cout << "This contact does not exist, please try again !" << std::endl << std::endl;
            } else {
                std::cout << "Information about contact at index " << index << std::endl;
                std::cout << "First name : " << contact.getFirstName() << std::endl;
                std::cout << "Last name : " << contact.getLastName() << std::endl;
                std::cout << "Nickname : " << contact.getNickname() << std::endl;
                std::cout << "Login : " << contact.getLogin() << std::endl;
                std::cout << "Postal address : " << contact.getPostalAddress() << std::endl;
                std::cout << "Email address : " << contact.getEmailAddress() << std::endl;
                std::cout << "Phone number : " << contact.getPhoneNumber() << std::endl;
                std::cout << "Birthday date : " << contact.getBirthdayDate() << std::endl;
                std::cout << "Favorite meal : " << contact.getFavoriteMeal() << std::endl;
                std::cout << "Underwear color : " << contact.getUnderwearColor() << std::endl;
                std::cout << "Darkest secret : " << contact.getDarkestSecret() << std::endl << std::endl;
            }
        }
    }
}