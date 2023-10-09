/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:41 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:45:27 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &to_copy) :Animal(to_copy)
{
	std::cout<< "Cat copy constructor called" << std::endl;
	*this = to_copy;
}

Cat	&Cat::operator=(const Cat &to_copy)
{
	this->type = to_copy.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": Meow!" << std::endl;
}
