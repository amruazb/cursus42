/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:28 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/10 01:57:37 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}


void sort_2_num(t_list **stack_a)
{
    if ((*stack_a)->content > (*stack_a)->next->content)
        sa(stack_a);
}

void sort_3_num_cont(t_list **stack_a)
{
    if ((*stack_a)->content < (*stack_a)->next->content)
    {
        if ((*stack_a)->content < (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
        {
            sa(stack_a);
            ra(stack_a);
        }
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
            rra(stack_a);
    }
}

void sort_3_num(t_list **stack_a)
{
    if ((*stack_a)->content > (*stack_a)->next->content)
    {
        if ((*stack_a)->content < (*stack_a)->prev->content && (*stack_a)->next->content < (*stack_a)->prev->content)
            sa(stack_a);
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
        {
            sa(stack_a);
            rra(stack_a);
        }
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content < (*stack_a)->prev->content)
            ra(stack_a);
    }
    sort_3_num_cont(stack_a);
}

void sort_4_num_com_move(t_list **stack_a, t_list **stack_b)
{
    pb(stack_a, stack_b);
    sort_3_num(stack_a);
    pa(stack_a, stack_b);
}

void sort_4_num_cont(t_list **stack_a, t_list **stack_b, int pos)
{
    if (pos == 3)
    {
        rra(stack_a);
        rra(stack_a);
        sort_4_num_com_move(stack_a, stack_b);
    }
    if (pos == 4)
    {
        rra(stack_a);
        if (ft_lstsize(*stack_a) == 1)
            return;
        sort_4_num_com_move(stack_a, stack_b);
    }
}
