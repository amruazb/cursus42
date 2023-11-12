/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:55:23 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 10:11:41 by aabashee         ###   ########.fr       */
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

// char ft_toupperchar(unsigned int index, char c)
// {
//     // Example function: converts characters to uppercase
//     if (c >= 'a' && c <= 'z')
//         return c - 'a' + 'A';
// 	else
//         return c;
// }

// int main() 
// {
//     char input[] = "Hello, World!";
//     char *result = ft_strmapi(input, ft_toupperchar);

//     if (result != NULL) {
//         printf("Original string: %s\n", input);
//         printf("Transformed string: %s\n", result);

//         // Don't forget to free the allocated memory
//         free(result);
//     } else {
//         printf("Memory allocation failed!\n");
//     }

//     return 0;
// }
