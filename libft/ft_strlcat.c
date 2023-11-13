/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:31:28 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 16:26:41 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	space;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (dstsize + slen);
	space = dstsize - dlen - 1;
	if (slen <= space)
	{
		ft_memcpy(dst + dlen, src, slen);
		dst[dlen + slen] = '\0';
	}
	else
	{
		ft_memcpy(dst + dlen, src, space);
		dst[dstsize - 1] = '\0';
	}
	return (dlen + slen);
}

/* int main(void)
{
    char dst[100];
    char src[50];
    printf("Enter the initial destination string: ");
    scanf("%s", dst);
    printf("Enter the source string: ");
    scanf("%s", src);
    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Concatenated string (resulting size = %zu): %s\n", result, dst);

    return 0;
} */
