/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:00:27 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/05 15:00:47 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/* int main(void)
{
    char testChar;

    printf("Enter a character: ");
    scanf(" %c", &testChar);

    int result = ft_isalnum(testChar);

    if (result)
        printf("%c is an alphanumeric character.\n", testChar);
    else
        printf("%c is not an alphanumeric character.\n", testChar);

    return 0;
} */
