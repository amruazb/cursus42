/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:40:13 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 09:48:42 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main()
// {
// 	ft_putnbr_fd(-2147483648,1);
// 	ft_putstr_fd("\n",1);
// 	ft_putnbr_fd(2147483647,1);
// 	ft_putstr_fd("\n",1);
// 	ft_putnbr_fd(0,1);
// 	ft_putstr_fd("\n",1);
// 	ft_putnbr_fd(42,1);
// 	ft_putstr_fd("\n",1);
// }