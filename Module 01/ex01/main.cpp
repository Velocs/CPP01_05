/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:03:45 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/24 16:41:03 by aliburdi         ###   ########.fr       */
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
	
	std::cout << "Nice and what's their name?\nZombies' name: ";
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
