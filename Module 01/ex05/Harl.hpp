/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:25:22 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/30 18:49:15 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
			 Harl(void);
		void complain(std::string level);
			 ~Harl(void);
};

typedef void (Harl::*function_ptr) (void);

#endif