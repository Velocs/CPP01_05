/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:41 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:55:18 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
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
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete (this->brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy) 
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
	std::cout<< "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &to_copy)
{
	this->type = to_copy.type;
	this->brain = to_copy.brain;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": Meow!" << std::endl;
}
