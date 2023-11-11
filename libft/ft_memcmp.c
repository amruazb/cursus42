/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:08:44 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 13:55:52 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*int main(void)
{
    unsigned char memory1[100];
    unsigned char memory2[100];
    size_t memorySize;
    printf("Enter the size of the memory blocks: ");
    scanf("%zu", &memorySize);
    if (memorySize > sizeof(memory1) || memorySize > sizeof(memory2)) {
        printf("Memory block size exceeds the array size.\n");
        return 1;
    }
    printf("Enter the data for the first memory block (as decimal values,
	separated by spaces): ");
    for (size_t i = 0; i < memorySize; i++) {
        scanf("%hhu", &memory1[i]);
    }
    printf("Enter the data for the second memory block (as decimal values,
	separated by spaces): ");
    for (size_t i = 0; i < memorySize; i++) {
        scanf("%hhu", &memory2[i]);
    }
    int result = ft_memcmp(memory1, memory2, memorySize);

    if (result == 0)
	    printf("The memory blocks are equal. (Result: %d)\n", result);
	else if (result < 0)
	    printf("The first memory block is less than the second memory block. 
		(Result: %d)\n", result);
	else
		printf("The first memory block is greater than the second memory block.
		(Result: %d)\n", result);
}*/
