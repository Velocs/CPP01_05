/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:25:28 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/30 18:56:51 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string level;
	Harl harl;
	
	do {
		std::cout << "Insert complain: " << std::endl;
		std::cin >> level;
		if (std::cin.eof())
			return (0);
		harl.complain(level);
	} while (level.compare("exit"));
	return (0);
}
