/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:11:52 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:20:25 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain(void);
    ~Brain(void);
	Brain(const Brain &to_copy);
    Brain& operator=(const Brain &to_copy);
};
 
#endif