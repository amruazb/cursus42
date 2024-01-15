/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_sort_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:02:06 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 22:06:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *list)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = list;
	size = lst_size(list);
	i = 0;
	while (i < size)
	{
		if (tmp->data > tmp->next->data)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i + 1 < size)
		return (0);
	else
		return (1);
	return (0);
}

int	is_zero(int p_ati, char *w)
{
	int	z;

	z = 0;
	if (p_ati == 0)
	{
		while (w[z])
		{
			if ((w[z] == '-' || w[z] == '+') && (w[z + 1]
					&& w[z + 1] >= '0' && w[z + 1] <= '9'))
				z++;
			while (w[z] == '0')
				z++;
			if (w[z])
				return (1);
		}
		return (0);
	}
	return (0);
}

int	is_dup(t_list *list, int data)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		if (tmp->data == data)
			return (1);
		tmp = tmp->next;
		if (tmp == list)
			break ;
	}
	return (0);
}

int	lst_size(t_list	*list)
{
	int	size;
	int	data;

	size = 1;
	data = list->data;
	list = list->next;
	while (data != list->data)
	{
		size++;
		list = list->next;
	}
	return (size);
}
