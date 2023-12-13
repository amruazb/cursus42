/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:49:20 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/10 02:51:21 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
// 	char buffer[100];

// 	ssize_t readBytes = read(0, buffer, sizeof(buffer));

// 	ssize_t writeBytes = write(1, buffer, readBytes);

// 	return(0);
// }

// int main()
// {
// 	int fd = open("amir.txt", O_CREAT | O_WRONLY | O_TRUNC);
// 	ft_putchar_fd('H', fd);
// 	ft_putchar_fd('e', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('l', fd);
// 	ft_putchar_fd('o', fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// }