/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:04:23 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/24 16:28:56 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	;	
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": Eugh!" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name)
{
	Zombie mini_zombie(name);
	
	mini_zombie.announce();
}

Zombie* newZombie( std::string name)
{
	return(new Zombie(name));
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}