/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:16:29 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 07:20:28 by aabashee         ###   ########.fr       */
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

/* int main()
{
    char input[256];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
   if (input[ft_strlen(input) - 1] == '\n')
	   input[ft_strlen(input) - 1] = '\0';

    char *result = ft_strdup(input);
    printf("Copied string is: %s\n", result);

    free(result);
    return 0;
} */
