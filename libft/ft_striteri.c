/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:15:16 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/12 14:13:18 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
// void char_modifier(unsigned int index, char *c) 
// {
//     if (*c >= 'a' && *c <= 'z') {
//         *c = *c - ('a' - 'A');
//     }
// }
// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// int main()
// {
//     char input_buffer[100]; // Buffer to store user input

//     printf("Enter a string: ");
//     if (!fgets(input_buffer, sizeof(input_buffer), stdin)) 
//     {
//         perror("Error reading input");
//         return 1;
//     }
//     size_t input_length = ft_strlen(input_buffer);
//     if (input_length > 0 && input_buffer[input_length - 1] == '\n')
//         input_buffer[input_length - 1] = '\0';

//     printf("Original String: %s\n", input_buffer);

// 	void *fun = (void (*)(unsigned int, char *))ft_toupper;
//     ft_striteri(input_buffer, (void (*)(unsigned int, char *))&fun);

//     printf("Modified String: %s\n", input_buffer);

//     return 0;
// }
