/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:01:40 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/15 09:36:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int	negative;

	num = 0;
	negative = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * negative);
}

int main()
{
	printf("%d\n",ft_atoi("-9223372036854775810"));
	printf("%d\n",atoi("-9223372036854775808"));
	printf("%d\n",atoi("9223372036854775807"));
	printf("%d\n",ft_atoi("9223372036854775807"));
	printf("%d\n",ft_atoi("-332412"));
	printf("%d\n",ft_atoi("-2147483647"));
	printf("%d\n",ft_atoi("2147483649"));
	printf("%d\n",ft_atoi("34"));
}