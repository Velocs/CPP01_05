/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 00:34:20 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:53:40 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hp = 100;
	this->mp = 100;
	this->atk = 30;
	this->name = "FragTrap";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->hp = 100;
	this->mp = 100;
	this->atk = 30;
	this->name = name;
}

FragTrap::FragTrap(FragTrap &to_copy) :ClapTrap(to_copy) 
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = to_copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &to_copy)
{
	this->name = to_copy.name;
	this->hp = to_copy.hp;
	this->mp = to_copy.mp;
	this->atk = to_copy.atk;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->mp <= 0)
	{
		std::cout << "FragTrap has no more energy" << std::endl;
		return ;
	}
	this->mp -= 1;
	if (this->mp < 0)
		this->mp = 0;
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->atk << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << ": High five bro!" << std::endl;
}