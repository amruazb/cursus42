/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:43:47 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/29 08:43:49 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long int num, int uppercase)
{
	char	*hex_chars;
	int		count;

	count = 0;
	hex_chars = "0123456789abcdef";
	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_print_hex(num / 16, uppercase);
	count += ft_putchar(hex_chars[num % 16]);
	return (count);
}

int	ft_printptr(unsigned long long ptr)
{
	int				count;

	count = 0;
	count += ft_putstr("0x");
	if (ptr == 0)
	{
		count += ft_putstr("0");
	}
	else
	{
		count += ft_print_hex(ptr, 0);
	}
	return (count);
}
