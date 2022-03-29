/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:37:35 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/28 22:07:49 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

using std::string;

class Contact
{
private:
	bool empty;
	string firstName;
	string lastName;
	string nickName;
	string number;
	string secret;
public:
	Contact(string fn, string ln, string nn, string num, string secret);
	Contact();
	~Contact();
	string getFirstName();
	string getLastName();
	string getNickName();
	string getNumber();
	string getSecret();
	bool isEmpty();
	void setFirstName(string fn);
	void setLastName(string ln);
	void setNickName(string nn);
	void setNumber(string num);
	void setSecret(string sec);
	void printInfo(int index);
	void printContact();
};

#endif // CONTACT_H
