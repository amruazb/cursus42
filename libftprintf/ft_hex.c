/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:59:36 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/18 14:27:58 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long num, int uppercase)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	if (num >= 16)
		ft_print_hex(num / 16, uppercase);
	ft_putchar(hex_chars[num % 16]);
}
