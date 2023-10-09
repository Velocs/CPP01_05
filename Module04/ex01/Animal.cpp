/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:10 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:29:15 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &to_copy)
{
	std::cout<< "Animal copy constructor called" << std::endl;
	*this = to_copy;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal define type constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &to_copy)
{
	this->type = to_copy.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
