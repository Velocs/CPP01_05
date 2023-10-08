/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:51:29 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/08 18:05:39 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(nbr * (1 << this->fractional_bits));
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = nbr << this->fractional_bits;
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed	&Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return (float)(this->value) / (1 << fractional_bits);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}