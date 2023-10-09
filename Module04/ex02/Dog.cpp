/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:56 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:55:00 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	Brain	*brain;

	try
	{
		brain = new Brain;
	}
	catch (std::bad_alloc &error)
	{
		std::cout << "Error: " << error.what() << std::endl;
	}
	this->brain = brain;
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete (this->brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	try
	{
		this->brain = new Brain;
	}
	catch (std::bad_alloc &error)
	{
		std::cout << "Error: " << error.what() << std::endl;
	}
	this->brain = to_copy.brain;
	this->type = to_copy.type;
}

Dog	&Dog::operator=(const Dog &to_copy)
{
	this->type = to_copy.type;
	this->brain = to_copy.brain;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": Woof!" << std::endl;
}
