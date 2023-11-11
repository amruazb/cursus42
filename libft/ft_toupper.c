/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:33:47 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 04:34:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    int result = ft_toupper(c);

    if (result != c) {
        printf("Uppercase equivalent: %c\n", result);
    } else {
        printf("The character remains unchanged: %c\n", c);
    }

    return 0;
}*/
