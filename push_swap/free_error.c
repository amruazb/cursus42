/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:18:19 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 20:45:15 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freelist(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		tmp = tmp->next;
		free(list);
		list = tmp;
	}
}

void	ft_del_top(t_list **list)
{
    if (*list == NULL || (*list)->next == NULL)
	{
        free(*list);
        *list = NULL;
        return;
    }
    t_list* secondLast = *list;
    while (secondLast->next->next != NULL)
	{
        secondLast = secondLast->next;
    }
    free(secondLast->next);
    secondLast->next = NULL;
}

void	free_array(char **str)
{
	char	**pstr;

	pstr = str;
	while (*pstr)
		free(*pstr++);
	free(str);
}

void	free_exit(t_list *stack, char **str)
{
	freelist(stack);
	free_array(str);
	print_error();
}

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
