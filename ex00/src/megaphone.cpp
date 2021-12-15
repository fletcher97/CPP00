/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 03:05:27 by mgueifao          #+#    #+#             */
/*   Updated: 2021/12/15 03:05:28 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			const char *s = argv[i];
			for (int j = 0; s[j]; j++)
				std::cout << (char)toupper(s[j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
