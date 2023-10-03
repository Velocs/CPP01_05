/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:03:45 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/03 17:50:53 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int main(void)
{
	Zombie *zombie;
	std::string name;
	int	N;
	int	i = 0;
	
	std::cout << "Choose a name for the zombies\nZombies' name: ";
	std::getline(std::cin, name);
	std::cout << "How many zombies will there be?\nZombie's number: ";
	std::cin >> N;
	zombie = zombieHorde(N, name);
	while (i < N)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (0);
}
