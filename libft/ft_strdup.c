/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:16:29 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/12 01:38:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup)
	{
		ft_memcpy(dup, s, len);
		dup[len] = '\0';
	}
	return (dup);
}
char *ft_strdup(const char *s)
{
	size_t len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
}
//  #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_strdup(av[1]));
// }
