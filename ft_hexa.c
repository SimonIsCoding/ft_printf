/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:55:15 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/30 20:01:52 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_counter(unsigned long long nb)
{
	unsigned long long	i;

	i = 0;
	while (nb / 16 != 0)
	{
		i++;
		nb /= 16;
	}
	i++;
	return (i);
}

int	ft_puthexadecimal(unsigned int nb)
{
	char	*s;
	char	x;

	s = "0123456789abcdef";
	if (nb >= 16)
	{
		if (ft_puthexadecimal(nb / 16) == -1)
			return (-1);
		x = s[(nb % 16)];
	}
	else
		x = s[nb];
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_puthexadecimal_counter(nb));
}

int	ft_puthexadecimal_upper(unsigned int nb)
{
	char	*s;
	char	x;

	s = "0123456789ABCDEF";
	if (nb >= 16)
	{
		if (ft_puthexadecimal_upper(nb / 16) == -1)
			return (-1);
		x = s[(nb % 16)];
	}
	else
		x = s[nb];
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_puthexadecimal_counter(nb));
}

int	ft_puthexadecimal_long(unsigned long long nb)
{
	char	*s;
	char	x;

	s = "0123456789abcdef";
	if (nb >= 16)
	{
		if (ft_puthexadecimal_long(nb / 16) == -1)
			return (-1);
		x = s[(nb % 16)];
	}
	else
		x = s[nb];
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_puthexadecimal_counter(nb));
}

int	ft_putpointer(unsigned long long nb)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	ft_puthexadecimal_long(nb);
	return (ft_puthexadecimal_counter(nb) + 2);
}
