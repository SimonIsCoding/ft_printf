/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:04:33 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/30 17:32:33 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_strlen(const char *s);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_format(char c, va_list args, int ctr);
int	ft_printf(const char *str, ...);
int	ft_putnbr_counter(int nb);
int	ft_putnbr(int nb);
int	ft_putunsigned_counter(unsigned int nb);
int	ft_putunsigned(unsigned int nb);
int	ft_puthexadecimal_counter(unsigned long long nb);
int	ft_puthexadecimal(unsigned int nb);
int	ft_puthexadecimal_upper(unsigned int nb);
int	ft_putpointer(unsigned long long nb);
int	ft_puthexadecimal_long(unsigned long long nb);
int	ft_putnbr_max(int nb);

#endif
