/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:34:35 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/07 04:35:17 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    int result = ft_tolower(c);

    if (result != c) {
        printf("Lowercase equivalent: %c\n", result);
    } else {
        printf("The character is not an uppercase 
		letter or has no lowercase equivalent.\n");
    }

    return 0;
}*/
