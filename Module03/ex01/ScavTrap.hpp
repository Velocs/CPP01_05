/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:24:47 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 00:42:18 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:	
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &to_copy);
	ScavTrap	&operator=(const ScavTrap &to_copy);
	void	guardGate();
	void	attack(const std::string &target);
		~ScavTrap(void);
	private:
};

#endif