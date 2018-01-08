/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:30 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 13:40:30 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"
#include "contact.class.hpp"

int action(std::string command) {
    if (command.compare("ADD") == 0) {
        return 1;
    }
    else if (command.compare("SEARCH") == 0) {
        return 2;
    }
    else if (command.compare("EXIT") == 0) {
        return 3;
    }
    else {
        return 0;
    }
}

int choseAction(void) {
    std::string choice;

    std::cout << "Enter one of the following command :" << std::endl;
    std::cout << "ADD - to add a new contact to this phone book" << std::endl;
    std::cout << "SEARCH - to search for a specific contact in the list" << std::endl;
    std::cout << "EXIT - to quit, all contacts will be erased" << std::endl;
    std::cin >> choice;
    std::cout << std::endl;
    return action(choice);
}

int main(void) {
    size_t      current_index;
    int         current_action;
    Phone_book  phoneBook;
    Contact     newContact;

    current_action = 0;
    current_index = 0;
    while(current_action != 3) {
        if (current_action == 1) {
            newContact = Contact::create();
            phoneBook.add(newContact, current_index);
            if (current_index == 7)
                current_index = 0;
            else
                current_index += 1;
        }

        if (current_action == 2) {
            phoneBook.displayAll();
            std::cout << std::endl;
            phoneBook.displayOne();
        }

        current_action = choseAction();


    }

    return 1;
}