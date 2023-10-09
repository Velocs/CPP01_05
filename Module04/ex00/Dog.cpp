/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:56 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:45:39 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) :Animal(to_copy)
{
	std::cout<< "Dog copy constructor called" << std::endl;
	*this = to_copy;
}

Dog	&Dog::operator=(const Dog &to_copy)
{
	this->type = to_copy.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof!" << std::endl;
}
