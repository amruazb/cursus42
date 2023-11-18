/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:03:55 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/18 14:04:34 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conditions(char format, va_list args)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, const char *));
	else if (format == 'p')
		ft_printptr(args);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ft_putunsignbr(va_arg(args, unsigned int));
	else if (format == 'x')
		ft_print_hex(va_arg(args, unsigned long), 0);
	else if (format == 'X')
		ft_print_hex(va_arg(args, unsigned long), 1);
	else if (format == '%')
		ft_putchar('%');
	else
		ft_putchar(format);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_conditions(*format, args);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (0);
}
