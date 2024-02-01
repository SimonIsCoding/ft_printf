/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:55:15 by simarcha          #+#    #+#             */
/*   Updated: 2024/02/01 18:44:46 by simarcha         ###   ########.fr       */
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

int	ft_puthexadecimal(unsigned int nb, char *s)
{
	char	x;

	if (nb >= 16)
	{
		if (ft_puthexadecimal(nb / 16, s) == -1)
			return (-1);
		x = s[(nb % 16)];
	}
	else
		x = s[nb];
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_puthexadecimal_counter(nb));
}

int	ft_puthexadecimal_long(unsigned long long nb, char *s)
{
	char	x;

	if (nb >= 16)
	{
		if (ft_puthexadecimal_long(nb / 16, s) == -1)
			return (-1);
		x = s[(nb % 16)];
	}
	else
		x = s[nb];
	if (write(1, &x, 1) == -1)
		return (-1);
	return (ft_puthexadecimal_counter(nb));
}

int	ft_pointer(unsigned long long nb, char *s)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	ft_puthexadecimal_long(nb, s);
	return (ft_puthexadecimal_counter(nb) + 2);
}
