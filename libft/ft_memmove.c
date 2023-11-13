/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:46:25 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 09:18:06 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*source;
	unsigned char		*destination;

	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (destination < source) 
	{
		ft_memcpy(destination, source, len);
	}
	else
	{
		destination += len;
		source += len;
		while (len-- > 0)
			*(--destination) = *(--source);
	}
	return (dst);
}
/*int main(void)
{
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char buffer[14];
	char text[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[27];
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%s\n",ft_memmove(buffer,data, 26));
	printf("%s\n",ft_memmove(result + 13,result, 13));
	printf("%s\n",ft_memmove(buffer + 3,data, 13));
} */

// int main() {
//     // Test Case 1: Non-overlapping regions
//     char source[] = "Hello, World!";
//     char destination[14];

//     ft_memmove(destination, source, 13);

//     printf("Test Case 1:\n");
//     printf("Result: %s\n\n", destination);

//     // Test Case 2: Overlapping regions with source before destination
//     char data[] = "Hello, World!";
//     char tring[14];

//     ft_memmove(tring, data, 13);

//     printf("Test Case 2:\n");
//     printf("Result: %s\n\n", buffer);

//     // Test Case 3: Overlapping regions with source after destination
//     char text[] = "Hello, World!";
//     char result[14];

//     ft_memmove(result + 7, result, 7);

//     printf("Test Case 3:\n");
//     printf("Result: %s\n\n", result);

//     // Test Case 4: Overlapping regions with partial overlap
//     char str[] = "Hello, World!";

//     ft_memmove(str + 1, str, 11);

//     printf("Test Case 4:\n");
//     printf("Result: %s\n\n", str);

//     return 0;
// } 
