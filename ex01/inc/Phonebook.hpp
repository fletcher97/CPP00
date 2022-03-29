/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 03:21:09 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/28 22:17:03 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>

#include <Contact.hpp>

#define MAX_BOOK_SIZE 8

using std::string;

class Phonebook
{
protected:
	Contact list[MAX_BOOK_SIZE];
	short int next;

public:
	Phonebook();
	~Phonebook();
	void add(string fn, string ln, string nn, string num, string secret);
	void printBook();
	void printContact(int i);
	bool checkIndex(int i);
};

#endif // PHONEBOOK_H
