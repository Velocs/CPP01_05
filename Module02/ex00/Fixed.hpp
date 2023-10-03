/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:49:40 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/02 19:14:49 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	fractional_bits;
	public:
							Fixed(void);
							Fixed(const Fixed &to_copy);
		Fixed				&operator=(const Fixed &to_copy);
							~Fixed(void);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);

};

#endif