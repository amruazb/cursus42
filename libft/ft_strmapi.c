/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:55:23 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/12 13:56:34 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c);

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

// int main() {
//     char input_string[] = "HELLO, World!";
//     char *result_string;
//		ft_strmapi(input_string, (char (*)(unsigned int, char))ft_toupper);
//     if (result_string == NULL) 
//	   {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }
//     printf("Original string: %s\n", input_string);
//     printf("Mapped string:   %s\n", result_string);
//     free(result_string);  // Don't forget to free the allocated memory

//     return 0;
// }
