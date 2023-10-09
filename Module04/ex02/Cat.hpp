/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:42:38 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:55:11 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		 Cat(void);
		~Cat(void);
		 Cat(const Cat &to_copy);
	Cat	&operator=(const Cat &to_copy);
	virtual void makeSound(void) const;
};

#endif