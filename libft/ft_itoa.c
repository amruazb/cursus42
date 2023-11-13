/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:47 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 15:52:46 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_digits(int n)
{
	long digitcount;

	digitcount = 1;
	if (n < 0)
	{
		n = -n;
		digitcount++;
	}
	while (n >= 10)
	{
		n /= 10;
		digitcount++;
	}
	return (digitcount);
}

char *ft_itoa(int n)
{
	char *result;
	int count;
	long original_n;
	long lastdigit;

	original_n = n;
	count = count_digits(n);
	if (n == -2147483647 -1)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		n = -n;
	result = malloc(count + 1);
	if (result == NULL)
		return (NULL);
	result[count] = '\0';
	while (count > 0)
	{
		lastdigit = n % 10;
		result[--count] = '0' + lastdigit;
		n /= 10;
	}
	if (original_n < 0)
		result[0] = '-';
	return (result);
}


// int main()
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(123));
// 	printf("%s\n", ft_itoa(-456));
// 	printf("%s\n", ft_itoa(7890));
// 	printf("%s\n", ft_itoa(-12345));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(7382147483648));
// 	printf("%s\n", ft_itoa(2147483649));
// 	printf("%s\n", ft_itoa(2147483647));
// 	free(result);

// }

