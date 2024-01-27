/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:54:34 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/26 21:23:20 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandle(int sig)
{
	static char	*current_char = NULL;
	static int	bit_count = 0;
	static char	current_byte = 0;

	if (current_char == NULL)
	{
		current_char = &current_byte;
	}
	if (sig == SIGUSR1)
	{
		*current_char = (*current_char << 1) | 1;
	}
	if (sig == SIGUSR2)
	{
		*current_char = (*current_char << 1) | 0;
	}
	bit_count++;
	if (bit_count == 8)
	{
		bit_count = 0;
		write(1, current_char, 1);
		*current_char = 0;
	}
}

int	main(void)
{
	ft_putstr("Server PID:");
	ft_putstr("Process ID: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, ft_sighandle);
	signal(SIGUSR2, ft_sighandle);
	while (1)
		pause();
}
