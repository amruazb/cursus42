/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 07:53:02 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/12 07:56:09 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ps1;
	char	*ptr;
	size_t	tlen;

	tlen = ft_strlen(s1) + ft_strlen(s2);
	ps1 = malloc(tlen + 1);
	if (ps1)
	{
		ptr = ps1;
		while (*s1)
			*ptr++ = *s1++;
		while (*s2)
			*ptr++ = *s2++;
		*ptr = '\0';
	}
	return (ps1);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	to_copy;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	to_copy = srclen;
	if (dstsize - 1 < srclen)
		to_copy = dstsize - 1;
	while (to_copy-- > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main() 
// {
// 	// Testing ft_strjoin
// 	const char *s1 = "Hello, ";
// 	const char *s2 = "world!";
// 	char *result_join = ft_strjoin(s1, s2);
// 	printf("ft_strjoin result: %s\n", result_join);
// 	free(result_join);
// 	// Testing ft_strchr
// 	const char *str = "This is a test string";
// 	int search_char = 't';
// 	char *result_strchr = ft_strchr(str, search_char);
// 	printf("ft_strchr result: %s\n", result_strchr);
// 	// Testing ft_strdup
// 	const char *original_str = "This is an original string";
// 	char *duplicate_str = ft_strdup(original_str);
// 	printf("ft_strdup result: %s\n", duplicate_str);
// 	free(duplicate_str);
// 	return 0;
// }

/* int main()
{
	char s[100] = "aamir";
	char d[100] = "zuhail";
	ft_strlcpy(d, s, 11);
	printf("strlen : %lu\n", ft_strlen("aamir"));
	printf("strjoin : %s\n", ft_strjoin("aamir"," zuhail"));
	printf("strchr : %s\n", ft_strchr("aamir zuhail basheer", ' '));
	printf("strdup : %s\n", ft_strdup("aamir"));
	printf("strlcpy dest: %s\n", d);
} */