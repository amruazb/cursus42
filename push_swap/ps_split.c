/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:36 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/10 13:58:49 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ps_split(char *s)
{
	int		k;
	char	**split;
	char	*current;

	k = 0;
	split = malloc(16384);
	if (!split)
		return (NULL);
	while (*s == ' ')
		s += 1;
	while (*s)
	{
		split[k] = malloc(1024);
		if (!split[k])
			return (NULL);
		current = split[k++];
		while (*s != ' ' && *s)
			*current++ = *s++;
		while(*s == ' ' && *s++)
			;
			*current = '\0';
	}
	split[k] = NULL;
	return (split);
}
/* int main()
{
	char **s = ps_split("Aamir zuhail basheer How are you ");
	while(*s)
		printf("%s\n", *s++);
	free(*s);
} */