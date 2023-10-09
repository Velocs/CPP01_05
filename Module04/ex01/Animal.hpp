/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:25 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:44:50 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
				Animal(void);
				Animal(const Animal &to_copy);
				Animal(std::string type);
		virtual	~Animal(void);
		Animal	&operator=(const Animal &to_copy);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif