/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:08:49 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 12:00:07 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}

/* int main(void)
{
	char str[100]; // Define an array to test memset
	size_t len;

	// printf("Enter the length: ");
	// scanf("%zu", &len);

	ft_bzero(str, 5);

	// Print the modified 'str'
	printf("%s \n", str);
} */
