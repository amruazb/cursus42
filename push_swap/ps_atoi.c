/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:18:26 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 12:18:29 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str)
{
	long long	num;
	int			negative;

	num = 0;
	negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '+' || *str == '-') && (*(str + 1)
			&& *(str + 1) >= '0' && *(str + 1) <= '9'))
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		if ((negative == -1 && num * negative < INT_MIN)
			|| (negative == 1 && num > INT_MAX))
			return (0);
		str++;
	}
	if ((*str && *str < '0') || (*str && *str > '9'))
		return (0);
	return (num * negative);
}

/* int main()
{
	printf("%d\n", ps_atoi("-23 423 14212 a143"));
	printf("%d\n", atoi("-23 423 14212 a143"));
	printf("%d\n", ps_atoi(" 22 34 23 14 21 21 43"));
	printf("%d\n", atoi(" 22 34 23 14 21 21 43"));
	printf("%d\n", ps_atoi("---22342314212143"));
	printf("%d\n", atoi("---22342314212143"));
	printf("%d\n", ps_atoi("---22342314212143"));
	printf("%d\n", atoi("---22342314212143"));
} */
