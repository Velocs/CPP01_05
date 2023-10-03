/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:21:49 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/03 17:46:06 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
				Zombie(void);
				Zombie(std::string name);
				~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
		Zombie* zombieHorde( int N, std::string name);
		
};

#endif