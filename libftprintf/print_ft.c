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

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	if (!str || !*str)
		return (0);
	else
	{
		while (*str)
		{
			count += ft_putchar (*str);
			str++;
		}
	}
	return (count);
}

int	ft_putnbr(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		ft_putchar('-');
		count++;
		num = -num;
	}
	if (num < 0)
		count += ft_putunsignbr((unsigned int)-num);
	else
		count += ft_putunsignbr((unsigned int)num);
	return (count);
}

int	ft_putunsignbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putunsignbr(num / 10);
	count++;
	ft_putchar(num % 10 + '0');
	return (count);
}