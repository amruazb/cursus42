/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:15:10 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 16:21:39 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}

/* int main()
{
	char src[100] = "I am Batman";
	size_t n = ft_strlen(src);
	char des[100];

	printf("Enter the source: ");
	scanf("%s", src);
	printf("Enter the size: ");
	scanf("%ld", &n);
	ft_memcpy(des,src,n);
	des[n] = '\0';
	printf("%s\n",des); 
}
 */


// int main(void)
// {
//     char src[50];
//     char dst[50];
//     size_t n;

//     // Get the source string from the user
//     printf("Enter the source string: ");
//     scanf("%s", src);

//     // Get the number of bytes to copy
//     printf("Enter the number of bytes to copy: ");
//     scanf("%zu", &n);

//     // Use ft_memcpy to copy the specified number of bytes
//     ft_memcpy(dst, src, n);

//     // Null-terminate the destination string
//     dst[n] = '\0';

//     printf("Copied string: %s\n", dst);

//     return 0;
// }
