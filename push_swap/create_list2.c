/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:00:33 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 22:17:56 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_stack(t_list **stack)
{
    t_list	*current;
    t_list	*next;

    current = *stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *stack = NULL;
}
