/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:24:21 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:41:57 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hp = 100;
	this->mp = 50;
	this->atk = 20;
	this->name = "ScavTrap";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->hp = 100;
	this->mp = 50;
	this->atk = 20;
	this->name = name;
}

ScavTrap::ScavTrap(ScavTrap &to_copy) :ClapTrap(to_copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = to_copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &to_copy)
{
	this->name = to_copy.name;
	this->hp = to_copy.hp;
	this->mp = to_copy.mp;
	this->atk = to_copy.atk;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->mp <= 0)
	{
		std::cout << "ScavTrap has no more energy" << std::endl;
		return ;
	}
	this->mp -= 1;
	if (this->mp < 0)
		this->mp = 0;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->atk << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in gate keeper mode" << std::endl;
}