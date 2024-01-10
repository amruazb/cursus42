/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:15:17 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 20:38:04 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_4_num(t_list **stack_a, t_list **stack_b)
{
    
    int min = find_min(*stack_a);
    int pos = find_pos(*stack_a, min);
    if (pos == 1)
    {
        sort_4_num_com_move(stack_a, stack_b);
    }
    if (pos == 2)
    {
        sa(stack_a);
        if (ft_lstsize(*stack_a) == 1)
            return;
        sort_4_num_com_move(stack_a, stack_b);
    }
    sort_4_num_cont(stack_a, stack_b, pos);
}

void sort_more_cont(t_list **stack_a, t_list **stack_b, int i)
{
    while (i)
    {
        pa(stack_a, stack_b);
        i--;
    }
}

void sort_more(t_list **stack_a, t_list **stack_b)
{
    int i[5];
    i[0] = 0;
    i[1] = ft_lstsize(*stack_a);
    i[3] = find_min(*stack_a);
    i[4] = find_pos(*stack_a, i[3]);
    while (*stack_a && i[1] > 0)
    {
        i[2] = ft_lstsize(*stack_a);
		printf("size = %d\n",i[2]);
        if (i[2] == 4)
            break;
        i[3] = find_min(*stack_a);
		ft_printlist(*stack_a);
        if ((*stack_a)->content == i[3])
        {
            pb(stack_a, stack_b);
            i[0]++;
        }
        else if (i[4] < i[1] / 2)
            ra(stack_a);
        else
            rra(stack_a);
		i[1]--;
    }
    sort_4_num(stack_a, stack_b);
    sort_more_cont(stack_a, stack_b, i[0]);
}


int is_sorted(t_list *stack)
{
    while (stack && stack->next)
    {
        if (stack->content > stack->next->content)
            return 0;
        stack = stack->next;
    }
    return 1; 
}
