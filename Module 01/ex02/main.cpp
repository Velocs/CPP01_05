/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:48:01 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/24 17:43:56 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string: " << &str << std::endl;
	std::cout << "The memory address of the stringPTR: " << stringPTR << std::endl; 
	std::cout << "The memory address of the stringREF: " << &stringREF << std::endl; 
	std::cout << "The value of the string: " << str << std::endl;
	std::cout << "The value pointed to by the stringPTR: " << *stringPTR << std::endl; 
	std::cout << "The value pointed to by the stringREF: " << stringREF << std::endl;
	return (0);
}
