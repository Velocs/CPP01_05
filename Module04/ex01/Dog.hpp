/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:43:01 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:55:08 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		 Dog(void);
		~Dog(void);
		 Dog(const Dog &to_copy);
	Dog	&operator=(const Dog &to_copy);
	virtual void makeSound(void) const;
};

#endif