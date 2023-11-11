/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 06:58:58 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 13:49:55 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = (const unsigned char *)s;
	while (n > 0)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	unsigned char memory[100];
	size_t memorySize;
	unsigned char searchByte;

	printf("Enter the size of the memory block: ");
	scanf("%zu", &memorySize);
	if (memorySize > sizeof(memory)) 
	{
		printf("Memory block size exceeds the array size.\n");
		return 1;
	}
	printf("Enter the memory block data (as decimal values,
	separated by spaces): ");
	for (size_t i = 0; i < memorySize; i++)
		scanf("%hhu", &memory[i]);
	printf("Enter a data to search for (in decimal): ");
	scanf("%hhu", &searchByte);
	void *result = ft_memchr(memory, searchByte, memorySize);
	if (result != NULL) 
		printf("Data %d found at position: %ld\n", searchByte,
		(unsigned char *)result - memory);
	else
		printf("data %d not found in the memory block.\n", searchByte);
} */
