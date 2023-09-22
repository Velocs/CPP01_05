/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:47:30 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/22 17:45:37 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie( std::string name);

int main(void)
{
	Zombie *zombie;
	std::string name;
	
	std::cout << "How would you like to name a zombie?\n";
	std::getline(std::cin, name);
	zombie = newZombie(name);
	zombie->announce();
	randomChump("Carl");
	delete(zombie);
	return (0);
}
