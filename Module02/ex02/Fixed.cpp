/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:36:07 by aliburdi          #+#    #+#             */
/*   Updated: 2023/10/03 17:44:19 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(const float nbr)
{
	this->value = roundf(nbr * (1 << this->fractional_bits));
}

Fixed::Fixed(const int nbr)
{
	this->value = nbr << this->fractional_bits;
}

Fixed::Fixed(const Fixed &to_copy)
{
	*this = to_copy;
}

Fixed::~Fixed(void)
{
	;
}

Fixed	&Fixed::operator=(const Fixed &to_copy)
{
	this->value = to_copy.getRawBits();
	return (*this);
}

bool				Fixed::operator>(const Fixed &to_compare) const
{
	return (this->getRawBits() > to_compare.getRawBits());
}

bool				Fixed::operator<(const Fixed &to_compare) const
{
	return (this->getRawBits() < to_compare.getRawBits());
}

bool				Fixed::operator>=(const Fixed &to_compare) const
{
	return (this->getRawBits() >= to_compare.getRawBits());
}

bool				Fixed::operator<=(const Fixed &to_compare) const
{
	return (this->getRawBits() <= to_compare.getRawBits());
}

bool				Fixed::operator==(const Fixed &to_compare) const
{
	return (this->getRawBits() == to_compare.getRawBits());
}

bool				Fixed::operator!=(const Fixed &to_compare) const
{
	return (this->getRawBits() != to_compare.getRawBits());
}

Fixed				Fixed::operator+(const Fixed &to_add) const
{
	return (this->toFloat() + to_add.toFloat());
}

Fixed				Fixed::operator-(const Fixed &to_subtract) const
{
	return (this->toFloat() - to_subtract.toFloat());
}

Fixed				Fixed::operator*(const Fixed &to_multiply) const
{
	return (this->toFloat() * to_multiply.toFloat());
}

Fixed				Fixed::operator/(const Fixed &to_divide) const
{
	return (this->toFloat() / to_divide.toFloat());
}

Fixed				&Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed				Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->value++;
	return (tmp);
}

Fixed				&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed				Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->value--;
	return (tmp);
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
	return (this->getRawBits() >> this->fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return (float)(this->getRawBits()) / (1 << fractional_bits);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}