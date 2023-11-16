/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:55:23 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/15 12:51:27 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*p;
	unsigned int	len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	p = result;
	i = 0;
	while (i < len)
	{
		*p = f(i, s[i]);
		p++;
		i++;
	}
	*p = '\0';
	return (result);
}


void example_function(unsigned int index, char *c)
{
    printf("Character at index %d: %c\n", index, *c);
}

int main()
{
    char str[] = "Hello, World!";
    ft_strmapi(str, example_function);

    return 0;
}