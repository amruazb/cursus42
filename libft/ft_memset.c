/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:47:25 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 09:49:49 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	uc = c;
	ptr = s;
	while (n-- > 0)
		*ptr++ = uc;
	return (s);
}

/* int main(void)
{
	char str[100]; // Define an array to test memset
	char fillChar;
	size_t len;

	printf("Enter a character: ");
	scanf(" %c", &fillChar);

	printf("Enter the length: ");
	scanf("%zu", &len);

	ft_memset(str, fillChar, len);

	// Print the modified 'str'
	printf("Modified String: %s\n", str);

	return 0;
} */