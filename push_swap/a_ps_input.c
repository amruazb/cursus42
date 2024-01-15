/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_ps_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:38:46 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 18:19:44 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ps_split(char *s)
{
	int		i;
	char	**split;
	char	*current;

	i = 0;
	split = malloc(1024);
	if (!split)
		return (NULL);
	while (*s == ' ' && *s++)
		;
	while (*s)
	{
		split[i] = malloc(1024);
		if (!split[i])
			return (NULL);
		current = split[i++];
		while (*s != ' ' && *s)
			*current++ = *s++;
		while (*s == ' ' && *s++)
			;
		*current = '\0';
	}
	split[i] = NULL;
	return (split);
}

int	ps_atoi(const char *l)
{
	long long	num;
	int			n;

	num = 0;
	n = 1;
	while (*l == ' ' || (*l >= 9 && *l <= 13))
		l++;
	if ((*l == '+' || *l == '-') && (*(l + 1)
			&&*(l + 1) >= '0' && *(l + 1) <= '9'))
	{
		if (*l == '-')
			n = -1;
		l++;
	}
	while (*l >= '0' && *l <= '9')
	{
		num = num * 10 + *l - '0';
		if ((n == -1 && num * n < INT_MIN) || (n == 1 && num > INT_MAX))
			return (0);
		l++;
	}
	if ((*l && *l < '0') || (*l && *l > '9'))
		return (0);
	return (num * n);
}

void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}
