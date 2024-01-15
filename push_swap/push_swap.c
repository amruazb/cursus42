/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:02:25 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 22:36:30 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *a, t_list *tmpa, int len)
{
	while (len)
	{
		printf("%d  ->  %d\n", a->data, tmpa->data);
		a = a->next;
		tmpa = tmpa->next;
		len--;
	}
}

void	sort_list(t_list **list_b, t_list **init_list)
{
	int	len;

	(void)list_b;
	len = lst_size(*init_list);
	if (len <= 34)
		sort_small_chunk(init_list, list_b, len);
	if (len >= 35 && len <= 134)
		sort_medium_chunk(init_list, list_b);
	if (len >= 135)
		sort_large_chunk(init_list, list_b);
}

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*init_list;

	list_a = NULL;
	list_b = NULL;
	init_list = NULL;
	if (ac >= 2)
	{
		if (av[1] == NULL || av[1][0] == '\0')
		{
			ft_putstr("Error\n");
			exit(0);
		}
		list_a = create_stack(++av);
		ft_init_list(&list_a, &init_list);
		if (is_sorted(list_a))
			ft_exit(list_a);
		sort_list(&list_b, &init_list);
	}
	return (0);
}
