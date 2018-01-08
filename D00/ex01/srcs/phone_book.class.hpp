/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:50:49 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 13:50:49 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_BOOK_CLASS_HPP
#define PHONE_BOOK_CLASS_HPP

#include "contact.class.hpp"
#include <iomanip>
#include <string>
#include <cctype>
#include <sstream>

class Phone_book {

public:
    Contact contacts[8];

    Phone_book(void);

    void        add(Contact contact, size_t index);

    void        displayAll(void);

    void        displayOne(void);

private:
    std::string resizeString(std::string str);
};


#endif
