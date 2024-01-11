/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:22:39 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/11 18:25:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ps_split(char *s)
{
	int		k;
	char	**split;
	char	*current;

	k = 0;
	split = malloc(4096);
	if (!split)
		return (NULL);
	while (*s == ' ' && s++)
		;
	while (*s)
	{
		split[k] = malloc(1024);
		if (!split[k])
			return (NULL);
		current = split[k++];
		while (*s != ' ' && *s)
			*current++ = *s++;
		while (*s == ' ' && *s++)
			;
		*current = '\0';
	}
	split[k] = NULL;
	return (split);
}
int main()
{
	char **s = ps_split("Aamir zuhail basheer How are you ");
	while(*s)
		printf("%s\n", *s++);
	free(*s);
}

// char **ps_split(char *s)
// {
//     char **split;
//     char *current;

//     split = malloc(4096 * sizeof(char *));
//     if (!split)
//         return NULL;

//     while (*s == ' ' && s++)
//         ;

//     while (*s)
//     {
//         *split = malloc(1024);
//         if (!*split)
//             return NULL;

//         current = *split++;
//         while (*s != ' ' && *s)
//             *current++ = *s++;

//         while (*s == ' ' && *s++)
//             ;
//         *current = '\0';
//     }

//     *split = NULL;
//     return split;
// }
