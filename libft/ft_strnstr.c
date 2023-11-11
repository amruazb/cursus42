/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:12:30 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 07:15:57 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*ps;
	const char	*pn;
	size_t		needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		ps = haystack;
		pn = needle;
		while (*ps && *pn && (*ps == *pn))
		{
			ps++;
			pn++;
		}
		if (*pn == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/* 
int main(void)
{
    char haystack[100];
    char needle[100];
    size_t len;
    printf("Enter the  string: ");
    scanf("%s", haystack);

    printf("Enter the substring: ");
    scanf("%s", needle);

    printf("Enter the maximum length to search: ");
    scanf("%zu", &len);

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
	    printf("Needle found at position: %ld\n", result - haystack);
	else
		printf("Needle not found in the haystack.\n");
} */