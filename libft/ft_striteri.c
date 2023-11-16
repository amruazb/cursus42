/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:15:16 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/15 12:50:58 by aabashee         ###   ########.fr       */
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

// void example_function(unsigned int index, char *c)
// {
//     printf("Character at index %d: %c\n", index, *c);
// }

// int main()
// {
//     char str[] = "Hello, World!";
//     ft_striteri(str, example_function);

//     return 0;
// }