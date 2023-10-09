/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:11:43 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/09 19:20:21 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain &to_copy)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = to_copy.ideas[i];
}

Brain& Brain::operator=(const Brain &to_copy)
{
    std::cout << "Brain copy called" << std::endl;
    if (this != &to_copy)
	{
        for (int i = 0; i < 100; i++ )
		{
            this->ideas[i] = to_copy.ideas[i];
        }
    }
    return *this;
}