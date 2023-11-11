/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:21:17 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 15:36:47 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	substr = NULL;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* int main()
{
	const char *input = "Hello, World";
	unsigned int start = 7;
	size_t length = 5;
	printf("%s\n", ft_substr(input, start, length)); // Should print "World"

	const char *a = "This is a test";
	unsigned int as = 0;
	size_t al = 4;
	printf("%s\n", ft_substr(a, as, al)); // Should print "This"

	const char *b = "Another example";
	unsigned int bs = 0;
	size_t bl = 7;
	printf("%s\n", ft_substr(b, bs, bl)); // Should print "Another"

	const char *c = "Testing";
	unsigned int cs = 0;
	size_t cl = 5;
	printf("%s\n", ft_substr(c, cs, cl)); // Should print "Testing"

	char *d = NULL;
	unsigned int ds = 0;
	size_t dl = 4;
	printf("%s\n", ft_substr(d, ds, dl)); // Should print "(null)"

	char *e = "";
	unsigned int es = 0;
	size_t el = 3;
	printf("%s\n", ft_substr(e, es, el)); // Should print an empty string

	char *f = "Sample";
	unsigned int fs = 2;
	size_t fl = 0;
	printf("%s\n", ft_substr(f, fs, fl)); // Should print an empty string

	char *g = "This is a test";
	unsigned int gs = 5;
	size_t gl = 11;
	printf("%s\n", ft_substr(g, gs, gl)); // Should print "is a test"

	return 0;
}
 */