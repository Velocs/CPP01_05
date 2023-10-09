/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:49:54 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:49:58 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy)
{
	std::cout<< "WrongAnimal copy constructor called" << std::endl;
	*this = to_copy;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal define type constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &to_copy)
{
	this->type = to_copy.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
