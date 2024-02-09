/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:54:34 by aabashee          #+#    #+#             */
/*   Updated: 2024/02/04 20:10:05 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandle(int sig)
{
	static char	current_char;
	static int	bit_count = 0;

	if (sig == SIGUSR1)
		current_char = (current_char << 1) | 1;
	if (sig == SIGUSR2)
		current_char = (current_char << 1) | 0;
	bit_count++;
	if (bit_count == 8)
	{
		bit_count = 0;
		ft_putchar(current_char);
		current_char = 0;
	}
}

int	main(void)
{
	ft_putstr("Process ID: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, ft_sighandle);
	signal(SIGUSR2, ft_sighandle);
	while (42)
		;
}
