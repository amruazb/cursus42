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

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_printed_chars++;
}

void	ft_putstr(const char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	ft_putunsignbr(num);
}

void	ft_putunsignbr(unsigned int num)
{
	if (num >= 10)
		ft_putunsignbr(num / 10);
	ft_putchar(num % 10 + '0');
}

void	ft_printptr(va_list args)
{
	unsigned long	ptr;

	ptr = va_arg(args, unsigned long);
	ft_putstr("0x");
	ft_print_hex(ptr, 0);
}
