/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:45:34 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:07:45 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		 WrongCat(void);
		~WrongCat(void);
		 WrongCat(const WrongCat &to_copy);
	WrongCat	&operator=(const WrongCat &to_copy);
	virtual void makeSound(void) const;
};

#endif