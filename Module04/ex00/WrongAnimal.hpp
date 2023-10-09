/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:45:07 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 18:51:12 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
				WrongAnimal(void);
				WrongAnimal(const WrongAnimal &to_copy);
				WrongAnimal(std::string type);
		virtual	~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal &to_copy);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif