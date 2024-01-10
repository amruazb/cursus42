/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:19 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 12:19:21 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, const char *));
			else if (*format == 'd')
				ft_putnbr(va_arg(args, int));
			else if (*format == '%')
				ft_putchar('%');
			else
				ft_putchar(*format);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

void	ft_putstr(const char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_printlist(t_list *stack)
{
	if (!stack)
		return ;
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

/* int main()
{
	char *s = "aamir";
	int a = 12345;
	int n = -3452343;
	printf("%s\n", s);
	printf("%d\n", a);
	printf("%d\n", n);
} */
