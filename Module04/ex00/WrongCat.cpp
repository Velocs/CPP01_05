/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:45:32 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:08:01 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &to_copy) :WrongAnimal(to_copy)
{
	std::cout<< "WrongCat copy constructor called" << std::endl;
	*this = to_copy;
}

WrongCat	&WrongCat::operator=(const WrongCat &to_copy)
{
	this->type = to_copy.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Oink oink!" << std::endl;
}
