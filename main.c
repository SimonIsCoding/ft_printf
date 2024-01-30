/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:03:29 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/30 17:38:56 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
/*
int	main(void)
{
	int					count;
	int					c = 'c';
	char				*s = "string";
	int					nb = -2147483648;
	unsigned int		abs = 4294967295;
	unsigned int		hexa = 4294967295;
	//int					*ptr = &nb;
	char				*ptr = s;

	int					nb1 = 0;
	int					*ptr1 = 0;

	count = 0;
	printf("----MY TEST----\n");
	count = ft_printf("__This is a %c %s %d %i %u %x %X %% %p test__", c, s, nb, nb, abs, hexa, hexa, ptr);
	printf("\n_%d_\n\n", count);

	ft_printf("%d %p \n", nb1, ptr1);

	printf("-----PRINTF----\n");
	count = printf("__This is a %c %s %d %i %u %x %X %% %p test__", c, s, nb, nb, abs, hexa, hexa, ptr);
	printf("\n_%d_\n\n", count);

	printf("%d %p \n", nb1, ptr1);
	
	return (0);
}
*/
/*
int	main(void)
{
	int	count;

	count = 0;
	printf("-----PRINTF----\n");
	count = printf(" lS%i%d\t2<\x4Sj%xQ<2H}%X35nMuK3%uKh0%%%co%XG<>@\v%i@", 2109466458, 1864227667, -2108844825, 1706395825, -2014770977,
352260642, -1043379726, 180743389);
	printf("\n_%d_\n\n\n", count);

	count = 0;
	ft_printf("----MY TEST----\n");
	count = ft_printf(" lS%i%d\t2<\x4Sj%xQ<2H}%X35nMuK3%uKh0%%%co%XG<>@\v%i@", 2109466458, 1864227667, -2108844825, 1706395825, -2014770977,
352260642, -1043379726, 180743389);
	ft_printf("\n_%d_\n\n\n", count);
	
	return (0);
}*/
/*
int	main(void)
{
	int		count;
	int	c = -2147483647;
	int	d = 2147483647;
	
	int	a = 1;
	int	b = 0;

	count = 0;
	printf("----MY TEST----\n");
	count = ft_printf(" %p %p \n", c, d);
	count = ft_printf(" %p %p \n", a, b);
	ft_printf("%d\n", count);
	ft_printf("\n\n");

	count = 0;
	printf("-----PRINTF----\n");
	count = printf(" %p %p \n", c, d);
	count = printf(" %p %p \n", a, b);
	printf("%d\n", count);
	printf("\n\n");

	return (0);
}
*/
/*
int	main(void)
{
	int	count;

	count = 0;
	printf("-----PRINTF----\n");
	count = printf("\001\002\007\v\010\f\r\n");
	printf("\n_printf : %d_\n", count);

	count = 0;
	ft_printf("----MY TEST----\n");
	count = ft_printf("\001\002\007\v\010\f\r\n");
	ft_printf("\n_mytest : %d_", count);
	
	return (0);
}
*/

