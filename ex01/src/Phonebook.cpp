/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fletcher <fletcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 03:21:19 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/30 12:22:55 by fletcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include <Phonebook.hpp>
#include <utils.hpp>

Phonebook::Phonebook(){
	this->next = 0;
}

Phonebook::~Phonebook(){}

void Phonebook::add(string fn, string ln, string nn, string num, string secret)
{
	this->list[this->next].setFirstName(fn);
	this->list[this->next].setLastName(ln);
	this->list[this->next].setNickName(nn);
	this->list[this->next].setNumber(num);
	this->list[this->next].setSecret(secret);
	this->next = (this->next + 1) % MAX_BOOK_SIZE;
}

void Phonebook::printBook(){
	printRow("Index", "First Name", "Last Name", "Nickname");
	for (int i = 0; i < MAX_BOOK_SIZE && !this->list[i].isEmpty(); i++)
		this->list[i].printInfo(i);
}

void Phonebook::printContact(int i){
	this->list[i].printContact();
}

bool Phonebook::checkIndex(int i){
	return i >= 0 && i < MAX_BOOK_SIZE && !this->list[i].isEmpty();
}

int Phonebook::getSize() {
	if (this->list[this->next].isEmpty())
		return this->next;
	else
		return MAX_BOOK_SIZE;
}
