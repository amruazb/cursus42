/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:15:16 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 09:52:10 by aabashee         ###   ########.fr       */
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

/* int main()
{
    char input_buffer[100]; // Buffer to store user input

    printf("Enter a string: ");
    if (!fgets(input_buffer, sizeof(input_buffer), stdin)) 
    {
        perror("Error reading input");
        return 1;
    }
    size_t input_length = ft_strlen(input_buffer);
    if (input_length > 0 && input_buffer[input_length - 1] == '\n')
        input_buffer[input_length - 1] = '\0';

    printf("Original String: %s\n", input_buffer);

    ft_striteri(input_buffer, &char_modifier);

    printf("Modified String: %s\n", input_buffer);

    return 0;
} */
