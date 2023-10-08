/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:30:21 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:19:46 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		int	hp;
		int mp;
		int atk;
	public:
			 ClapTrap(void);
			~ClapTrap(void);
			 ClapTrap(std::string name);
			 ClapTrap(const ClapTrap &to_copy);
	ClapTrap &operator=(const ClapTrap &to_copy);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif