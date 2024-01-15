/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_indexlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:01:55 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 22:05:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_list(t_list **list_a, t_list **init_list)
{
	int		i[5];
	t_list	*tmp;
	t_list	*tmp1;

	i[0] = 0;
	i[4] = lst_size(*list_a);
	tmp = (*list_a);
	while (i[0] < i[4])
	{
		i[3] = tmp->data;
		i[1] = 0;
		i[2] = 0;
		tmp1 = (*list_a);
		while (i[1] < i[4])
		{
			if (i[3] > tmp1->data)
				i[2]++;
			tmp1 = tmp1->next;
			i[1]++;
		}
		tmp1 = tmp1->next;
		custom_init_list(init_list, i[2]);
		tmp = tmp->next;
		i[0]++;
	}
}

void	custom_init_list(t_list **init_list, int i)
{
	if (!(*init_list))
		create_node(init_list, i);
	else
		add_to_end(init_list, i);
}
