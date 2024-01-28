/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:53:42 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/27 20:13:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	killuser(char *message, int pid)
{
	int		i;
	char	x;
	char	bit;
	int		shift;
	int		check;

	i = 0;
	while (message[i])
	{
		x = message[i];
		shift = 7;
		while (shift >= 0)
		{
			bit = (x >> shift) & 1;
			if (bit == 1)
				check = kill(pid, SIGUSR1);
			else
				check = kill(pid, SIGUSR2);
			shift--;
			usleep(300);
		}
		i++;
	}
	if (check == -1)
		ft_putstr("Wrong pid ");
}

int	checker(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 3 || ac >= 4)
	{
		ft_putstr("Error: Enter three arguments only");
		return (0);
	}
	while (av[1][i])
	{
		if (ft_isalpha(av[1][i]) == 1)
		{
			ft_putstr("Error: Enter only numbers");
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		pid;
	char	*message;

	if (!checker(ac, av))
		return (0);
	pid = ft_atoi(av[1]);
	if (pid <= 0)
	{
		ft_putstr("Wrong pid");
		return (0);
	}
	message = av[2];
	killuser(message, pid);
	return (0);
}
