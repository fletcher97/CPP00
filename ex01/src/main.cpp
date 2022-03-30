/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fletcher <fletcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:09:31 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/30 12:24:44 by fletcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Phonebook.hpp>
#include <utils.hpp>

static string read(string prompt)
{
	std::cout << prompt;
	string in;
	getline(std::cin, in);
	return in;
}

static void add(Phonebook *book)
{
	string fn = read("Please enter the contact's first name (enter nothing to cancel this operation):");
	if (!fn.compare(""))
		return;
	string ln = read("Please enter the contact's last name (enter nothing to cancel this operation):");
	if (!ln.compare(""))
		return;
	string nn = read("Please enter the contact's nick name (enter nothing to cancel this operation):");
	if (!nn.compare(""))
		return;
	string num = read("Please enter the contact's phone number (enter nothing to cancel this operation):");
	if (!num.compare(""))
		return;
	string secret = read("Please enter the contact's darkest secret (enter nothing to cancel this operation):");
	if (!secret.compare(""))
		return;
	(*book).add(fn, ln, nn, num, secret);
}

static void print_help()
{
	std::cout << "Available instructions:\n\tHELP/help\t- Print help msg\n\tADD\t\t\t- add new contact\n\tSEARCH\t\t- search for contacts\n\tEXIT\t\t- quit\n";
}

int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	Phonebook book;
	string in;
	while (in.compare("EXIT"))
	{
		in = read("Phonebook: ");
		if (!in.compare("EXIT"))
			continue;
		if (!in.compare("ADD"))
			add(&book);
		else if (!in.compare("SEARCH"))
		{
			if (book.getSize() == 0) {
				std::cout << "No contacts on your phonebook\n";
				continue;
			}
			book.printBook();
			in = read("Please insert the contact's index (enter nothing to cancel this operation):");
			if (!in.compare(""))
				continue;
			try
			{
				int index = to_int(static_cast<const char *>(in.c_str()));
				if (!book.checkIndex(index))
				{
					std::cout << "Index out of range\n";
					continue;
				}
				book.printContact(index);
			}
			catch(const std::exception& e)
			{
				std::cout << "Unable to convert to num. Aborting\n";
			}
		}
		else if (!in.compare("HELP") || !in.compare("help"))
			print_help();
		else
			std::cout << "Instruction not recognised. Available commands:\n\tADD\n\tSEARCH\n\tEXIT\n";
	}
	return 0;
}
