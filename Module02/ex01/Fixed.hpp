/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:49:40 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/03 17:23:54 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	fractional_bits = 8;
	public:
							Fixed(void);
							Fixed(const Fixed &to_copy);
							Fixed(const int nbr);
							Fixed(const float nbr);
		Fixed				&operator=(const Fixed &to_copy);
							~Fixed(void);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed  &nbr);

#endif