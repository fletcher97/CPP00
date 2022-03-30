/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fletcher <fletcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:31:11 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/30 12:13:08 by fletcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <Contact.hpp>
#include <utils.hpp>

Contact::Contact(string fn, string ln, string nn, string num, string sec){
	this->firstName = fn;
	this->lastName = ln;
	this->nickName = nn;
	this->number = num;
	this->secret = sec;
	this->empty = false;
}

Contact::Contact(){
	this->empty = true;
}

Contact::~Contact(){}

string Contact::getFirstName(){
	return this->firstName;
}

string Contact::getLastName(){
	return this->lastName;
}

string Contact::getNickName(){
	return this->nickName;
}

string Contact::getNumber(){
	return this->number;
}

string Contact::getSecret(){
	return this->secret;
}

bool Contact::isEmpty(){
	return this->empty;
}

void Contact::setFirstName(string fn){
	this->firstName = fn;
	this->empty = false;
}

void Contact::setLastName(string ln){
	this->lastName = ln;
	this->empty = false;
}

void Contact::setNickName(string nn){
	this->nickName = nn;
	this->empty = false;
}

void Contact::setNumber(string num){
	this->number = num;
	this->empty = false;
}

void Contact::setSecret(string sec){
	this->secret = sec;
	this->empty = false;
}

void Contact::printInfo(int index){
	printRow(ITOS(index), this->firstName, this->lastName, this->nickName);
}

void Contact::printContact(){
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nick Name: " << this->nickName << std::endl;
	std::cout << "Phone Number: " << this->number << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}
