/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:59:17 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/06 17:19:00 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main()
// {
// 	printf("%d\n", ft_isdigit('a'));
// }
/* int main(void)
{
	char testChar;

	printf("Enter a character: ");
	scanf(" %c", &testChar);

	int result = ft_isdigit(testChar);

	if (result)
		printf("%c is a digit.\n", testChar);
	else
		printf("%c is not a digit.\n", testChar);

	return 0;
} */
