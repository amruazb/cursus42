/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_list_create_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:39:08 by aabashee          #+#    #+#             */
/*   Updated: 2024/02/01 16:52:43 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_node(t_list **head, int data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->prev = tmp;
	tmp->data = data;
	tmp->next = tmp;
	(*head) = tmp;
}

void	add_at_begin(t_list	**tail, int data)
{
	t_list	*new;
	t_list	*tmp;

	create_node(&new, data);
	if (!(*tail))
		return ;
	tmp = (*tail)->prev;
	new->next = (*tail);
	new->prev = tmp;
	(*tail)->prev = new;
	tmp->next = new;
	(*tail) = new;
}

void	add_to_end(t_list **head, int data)
{
	t_list	*new;
	t_list	*tmp;

	create_node(&new, data);
	if (!(*head))
	{
		(*head) = new;
		return ;
	}
	tmp = (*head)->prev;
	tmp->next = new;
	new->prev = tmp;
	new->next = (*head);
	(*head)->prev = new;
}

void	ft_exit3(void)
{
	ft_putstr("Error\n");
	exit(1);
}
