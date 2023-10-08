/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 00:34:48 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:53:18 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			 FragTrap(void);
			~FragTrap(void);
			 FragTrap(std::string name);
			 FragTrap(FragTrap &to_copy);
	FragTrap &operator=(const FragTrap &to_copy);
		void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif