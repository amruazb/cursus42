/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:24:56 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 04:29:26 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	to_copy;

	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	to_copy = srclen;
	if (dstsize - 1 < srclen)
	{
		to_copy = dstsize - 1;
	}
	ft_memcpy(dst, src, to_copy);
	dst[to_copy] = '\0';
	return (srclen);
}

/* int main(void)
{
    char src[100];
    char dst[50];
    size_t dstsize;
    printf("Enter the source string: ");
    scanf("%s", src);
    printf("Enter the destination buffer size: ");
    scanf("%zu", &dstsize);

    size_t result = ft_strlcpy(dst, src, dstsize);

    printf("Copied string (resulting size = %zu): %s\n", result, dst);

    return 0;
} */
