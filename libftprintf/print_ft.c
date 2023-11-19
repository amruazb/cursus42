/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:56:26 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/18 11:56:26 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	g_printed_chars = 0;

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	while (*str)
		count += ft_putchar(*str++);
	return (count);
}

void	ft_putnbr(int num)
{
	// int	count;

	// count = 0;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	ft_putunsignbr((unsigned int)num);
}

void	ft_putunsignbr(unsigned int num)
{
	// int	count;

	// count = 0;
	if (num >= 10)
		ft_putunsignbr(num / 10);
	ft_putchar(num % 10 + '0');
}


