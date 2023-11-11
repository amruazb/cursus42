/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:27 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:34 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main(void)
{
    int testChar;

    printf("Enter an integer (representing a character): ");
    scanf("%d", &testChar);

    int result = ft_isprint(testChar);

    if (result)
        printf("%d is a printable character.\n", testChar);
    else
        printf("%d is not a printable character.\n", testChar);

    return 0;
}*/
