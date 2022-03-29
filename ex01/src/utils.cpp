/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 05:45:33 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/28 22:37:01 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

using std::string;

static void printColumn(string s){
	if (s.length() > 10)
		s = s.erase(9, std::string::npos).append(".");
	std::cout << "|" << std::setfill(' ') << std::setw(10) << s;
}

void printRow(string s1, string s2, string s3, string s4){
	printColumn(s1);
	printColumn(s2);
	printColumn(s3);
	printColumn(s4);
	std::cout << "|" << std::endl;
}

int to_int(char const *s)
{
	if ( s == NULL || *s == '\0' )
		throw std::invalid_argument("null or empty string argument");
	bool negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' )
		++s;
	if ( *s == '\0')
		throw std::invalid_argument("sign character only.");
	int result = 0;
	while(*s)
	{
		if ( *s < '0' || *s > '9' )
			throw std::invalid_argument("invalid input string");
		result = result * 10  - (*s - '0');  //assume negative number
		++s;
	}
	return negate ? result : -result; //-result is positive!
}
