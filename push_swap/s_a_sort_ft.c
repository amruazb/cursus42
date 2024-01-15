/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_a_sort_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:02:44 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 22:01:29 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_chunk(t_list **list_a, t_list **list_b, int len)
{
	if (len == 2)
		sort_2_num(list_a);
	if (len == 3)
		sort_3_num(list_a);
	if (len == 4)
		sort_4_num(list_a, list_b);
	if (len >= 5 && len <= 34)
		sort_more(list_a, list_b);
}

int	find_min(t_list *list)
{
	t_list	*tmp;
	int		size;
	int		min;
	int		i;

	i = 0;
	min = list->data;
	size = lst_size(list);
	tmp = list;
	while (i < size)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (min);
}

int	find_position(t_list *list, int data)
{
	t_list	*tmp;
	int		pos;
	int		i;
	int		size;

	size = lst_size(list);
	tmp = list;
	pos = 1;
	i = 0;
	while (i < size)
	{
		if (tmp->data == data)
			break ;
		tmp = tmp->next;
		pos++;
		i++;
	}
	return (pos);
}

int	find_max(t_list *list)
{
	t_list	*tmp;
	int		size;
	int		max;
	int		i;

	i = 0;
	max = list->data;
	size = lst_size(list);
	tmp = list;
	while (i < size)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (max);
}
