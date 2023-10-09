/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:05:58 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 16:37:32 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Karl("Karl");
	ClapTrap trap;

	trap.attack("velo");
	Karl.attack("marco");
	Karl.takeDamage(6);
	Karl.beRepaired(4);
	Karl.beRepaired(4);
	Karl.takeDamage(5);
	Karl.takeDamage(12);
	return (0);
}
