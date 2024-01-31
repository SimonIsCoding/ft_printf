/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:09:35 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/31 11:26:05 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_counter(int nb)
{
	int				i;
	long long int	a;

	i = 0;
	a = nb;
	if (a < 0)
	{
		i++;
		a = -nb;
	}
	while (a / 10 != 0)
	{
		i++;
		a /= 10;
	}
	i++;
	return (i);
}

int	ft_putnbr_max(int nb)
{
	if (nb == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
	}
	return (11);
}

int	ft_putnbr(int nb)
{
	int	temp;

	temp = nb;
	if (nb == -2147483648)
		return (ft_putnbr_max(nb));
	else
	{
		if (nb < 0)
		{
			if (write(1, "-", 1) == -1)
				return (-1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			if (ft_putnbr(nb / 10) == -1)
				return (-1);
			nb = nb % 10;
		}
		if (nb < 10)
			if (ft_putchar((int)nb + 48) == -1)
				return (-1);
	}
	return (ft_putnbr_counter(temp));
}

int	ft_putunsigned_counter(unsigned int nb)
{
	unsigned long int	i;

	i = 0;
	while (nb / 10 != 0)
	{
		i++;
		nb /= 10;
	}
	i++;
	return (i);
}

int	ft_putunsigned(unsigned int nb)
{
	char	x;

	if (nb >= 10)
	{
		if (ft_putunsigned(nb / 10) == -1)
			return (-1);
		x = (nb % 10) + '0';
	}
	else
		x = nb + '0';
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_putunsigned_counter(nb));
}
