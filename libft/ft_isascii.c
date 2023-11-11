/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:33:41 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/06 17:33:49 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main(void)
{
    int testChar;

    printf("Enter an integer (representing a character): ");
    scanf("%d", &testChar);

    int result = ft_isascii(testChar);

    if (result)
        printf("%d is an ASCII character.\n", testChar);
    else
        printf("%d is not an ASCII character.\n", testChar);

    return 0;
}*/
