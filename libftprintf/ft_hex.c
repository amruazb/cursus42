/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:59:36 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/19 13:44:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, int uppercase)
{
	char	*hex_chars;
	int		count;

	count = 0;
	if (num == 0)
	{
		ft_putchar('0');
		count++;
	}
	else
	{
		hex_chars = "0123456789abcdef";
		if (uppercase)
			hex_chars = "0123456789ABCDEF";
		if (num >= 16)
			ft_print_hex(num / 16, uppercase);
		ft_putchar(hex_chars[num % 16]);
		count++;
	}
	return (count);
}

int	ft_printptr(va_list args)
{
	unsigned long	ptr;
	int				count;

	count = 0;
	ptr = va_arg(args, unsigned long);
	if (ptr == 0)
	{
		ft_putstr("(null)");
	}
	else
	{
		ft_putstr("0x");
		ft_print_hex(ptr, 0);
	}
	return (count);
}
