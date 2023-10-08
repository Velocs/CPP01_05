/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:07:01 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:22:40 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "ClapTrap";
	this->hp = 10;
	this->mp = 10;
	this->atk = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	this->hp = 10;
	this->mp = 10;
	this->atk = 0;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &to_copy)
{
	this->name = to_copy.name;
	this->hp = to_copy.hp;
	this->mp = to_copy.mp;
	this->atk = to_copy.atk;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->mp <= 0)
	{
		std::cout << "ClapTrap has no more energy" << std::endl;
		return ;
	}
	this->mp -= 1;
	if (this->mp < 0)
		this->mp = 0;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->atk << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap" << this->name << " is dead!" << std::endl;
		return ;
	}
	this->hp -= amount;
	if (this->hp < 0)
		this->hp = 0;
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name << " has been killed!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->mp <= 0)
	{
		std::cout << "ClapTrap has no more energy" << std::endl;
		return ;
	}
	this->mp -= 1;
	if (this->mp < 0)
		this->mp = 0;
	if ((this->hp + amount) > 10)
	{
		std::cout << "ClapTrap " << this->name << " tries to heal for " << amount << " hp but instead it heals for " << 10 - this->hp << std::endl; 
		this->hp = 10;
		return ;
	}
	this->hp += amount;
	if (this->hp > 10)
		this->hp = 10;
	std::cout << "ClapTrap " << this->name << " heals for " << amount << " hp" << std::endl;
}
