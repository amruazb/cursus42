/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:18:42 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/10 02:07:55 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		stack_a = ps_create_stack(av);
		if (!stack_a)
			print_error();
		ft_printlist(stack_a);
		if (is_sorted(stack_a))
		{
			freelist(stack_a);
			return 0;
		}
		sort_more(&stack_a, &stack_b);
		ft_printf("Sorted Stack:\n");
		ft_printlist(stack_a);
	 }
	return (0);
}
