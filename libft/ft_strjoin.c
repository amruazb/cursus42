/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:33:03 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 08:35:16 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ps1;
	char	*ptr;
	int		tlen;

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

/* int main()
{
    const char *s1 = "Hi how are you";
    const char *s2 = " Aamir";

    char *result = ft_strjoin(s1, s2);
	printf("%s", result);
	free(result);
    return 0;
} */