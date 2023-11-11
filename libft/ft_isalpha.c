/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:58:48 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:13 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* int main(void)
{
    char testChar;

    printf("Enter a character: ");
    scanf("%c", &testChar);

    int result = ft_isalpha(testChar);

    if (result)
        printf("%c is an alphabetic character.\n", testChar);
    else
        printf("%c is not an alphabetic character.\n", testChar);

    return 0;
} */
