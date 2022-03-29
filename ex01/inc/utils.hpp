/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 05:47:06 by mgueifao          #+#    #+#             */
/*   Updated: 2022/03/28 22:42:59 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <string>

#include <sstream>

#define ITOS(x) static_cast< std::ostringstream & >( \
	( std::ostringstream() << std::dec << x ) ).str()

#define STOI(x)

void printRow(std::string s1, std::string s2, std::string s3, std::string s4);
int to_int(const char *s);

#endif // UTILS_H
