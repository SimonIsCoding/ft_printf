/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:04:33 by simarcha          #+#    #+#             */
/*   Updated: 2024/04/19 19:55:28 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_format(char c, va_list args, int ctr);
int	ft_printf_inner(const char *str, va_list args, int *ctr, int *percent);
int	ft_printf(const char *str, ...);
int	ft_putnbr_counter(int nb);
int	ft_putnbr(int nb);
int	ft_putunsigned_counter(unsigned int nb);
int	ft_putunsigned(unsigned int nb);
int	ft_puthexadecimal_counter(unsigned long long nb);
int	ft_puthexadecimal(unsigned int nb, char *s);
int	ft_pointer(unsigned long long nb, char *s);
int	ft_puthexadecimal_long(unsigned long long nb, char *s);
int	ft_putnbr_max(int nb);

#endif
