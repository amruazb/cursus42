/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_moves1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:39:58 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 17:40:01 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list_a)
{
	int	tmp;

	tmp = (*list_a)->data;
	(*list_a)->data = (*list_a)->next->data;
	(*list_a)->next->data = tmp;
	ft_putstr("sa\n");
}

void	sb(t_list **list_b)
{
	int	tmp;

	tmp = (*list_b)->data;
	(*list_b)->data = (*list_b)->next->data;
	(*list_b)->next->data = tmp;
	ft_putstr("sb\n");
}

void	ss(t_list **list_a, t_list **list_b)
{
	int	tmp;

	tmp = (*list_a)->data;
	(*list_a)->data = (*list_a)->next->data;
	(*list_a)->next->data = tmp;
	tmp = (*list_b)->data;
	(*list_b)->data = (*list_b)->next->data;
	(*list_b)->next->data = tmp;
	ft_putstr("ss\n");
}

void	pa(t_list **list_a, t_list **list_b)
{
	int	tmp;

	if (!(*list_b))
		return ;
	tmp = (*list_b)->data;
	del_first_node(&(*list_b));
	if (!(*list_a))
		create_node(&(*list_a), tmp);
	else
		add_at_begin(&(*list_a), tmp);
	ft_putstr("pa\n");
}

void	pb(t_list **list_a, t_list **list_b)
{
	int	tmp;

	if (!(*list_a))
		return ;
	tmp = (*list_a)->data;
	del_first_node(&(*list_a));
	if (!(*list_b))
		create_node(&(*list_b), tmp);
	else
		add_at_begin(&(*list_b), tmp);
	ft_putstr("pb\n");
}
