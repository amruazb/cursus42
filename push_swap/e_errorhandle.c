/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_errorhandle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:39:18 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 22:04:16 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pexit(t_list *list_a, char **splits)
{
	free_splits(splits);
	free_list(list_a);
	ft_putstr("Error\n");
	exit(1);
}

void	ft_exit(t_list *list_a)
{
	free_list(list_a);
	exit(1);
}

void	free_list(t_list *list)
{
	t_list	*tmp;
	t_list	*head;

	tmp = NULL;
	head = list;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
		if (head == list)
			break ;
	}
}

void	free_splits(char **splits)
{
	int	i;

	i = 0;
	if (splits == NULL)
		return ;
	while (splits[i])
	{
		free(splits[i]);
		i++;
	}
	free(splits);
}

void	del_first_node(t_list **list)
{
	t_list	*tmp;

	if ((*list) == NULL)
		return ;
	tmp = (*list);
	if (tmp == (*list)->next)
	{
		free((*list));
		(*list) = NULL;
		return ;
	}
	(*list)->next->prev = (*list)->prev;
	(*list)->prev->next = (*list)->next;
	(*list) = (*list)->next;
	free(tmp);
}
