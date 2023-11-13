/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 06:56:34 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 17:20:44 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 == '\0' || *s1 != *s2)
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* int main(void)
{
    char str1[100];
    char str2[100];
    int n;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("Enter the maximum comparison length (n): ");
    scanf("%d", &n);

    int result = ft_strncmp(str1, str2, n);
    printf("ASCII value of first differing character: %d\n", result);
    return 0;
} */
