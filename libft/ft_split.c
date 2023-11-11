/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:10:33 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/11 15:37:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	split = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!split)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			split[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	split[i] = 0;
	return (split);
}

/* int	wd_count(const char *str, char c)
{
	int			num_words;
	const char	*crt;

	crt = str;
	num_words = 0;
	while (*crt)
	{
		if (*crt == c)
		{
			num_words++;
		}
		crt++;
	}
	return (num_words);
}

char	**ft_split(const char *s, char c)
{
	char		**splitwd;
	size_t		i;
	size_t		len;
	const char	*start;

	i = 0;
	if (!s)
		return (0);
	splitwd = malloc(sizeof(char *) * (wd_count(s, c) + 1));
	if (!splitwd)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			len = s - start;
			splitwd[i++] = ft_substr(start, 0, len);
		}
		else
			s++;
	}
	splitwd[i] = NULL;
	return (splitwd);
} */
/* int	main(void)
{
	int i = 0;
	const char	*input = "This is a test string";
	char		separator = ' ';

	char	**result = ft_split(input, separator);
	if (result) 
	{
		while(result[i] != NULL)
		{
			{
				printf("Word %d: %s\n", i, result[i]);
				free(result[i]);
			}
			free(result);
			i++;
		}
	}
	return (0);
} */
