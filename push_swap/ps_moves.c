/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 21:23:02 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Swap the first 2 elements at the top of the stack a.
 * */
void	sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if(!tmp)
			return ;
	tmp->content = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp->content;
	free(tmp);
	ft_printf("sa\n");
}

/*
 * Swap the first 2 elements at the top of stack b.
 * */
void	sb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if(!tmp)
		return ;
	tmp->content = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp->content;
	free(tmp);
	ft_printf("sb\n");
}

/*
 * sa and sb at the same time.
 **/
void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}

// /**
//  * Take the first element at the top of b and put it at the top of a
//  * */
// void	pa(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*tmp;

// 	tmp = malloc(sizeof(t_list));
// 	if (!(*stack_b) || !tmp)
// 		return ;
// 	tmp->content = (*stack_b)->content;
// 	if (!(*stack_a))
// 		ft_lstnew(tmp->content);
// 	else
// 		ft_lstadd_front(&(*stack_a), tmp);
// 	ft_del_top(&(*stack_b));
// 	free(tmp);
// 	ft_printf("pa\n");
// }

// /**
//  * Take the first element at the top of a , and put it at the top of b.
//  * */
// void	pb(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*tmp;

// 	tmp = malloc(sizeof(t_list));
// 	if (!(*stack_a) || !tmp)
// 		return ;
// 	tmp->content = (*stack_a)->content;
// 	if (!(*stack_b))
// 		*stack_b = ft_lstnew(tmp->content);
// 	else
// 		ft_lstadd_front(stack_b, tmp);
// 	ft_del_top(stack_a);
// 	free(tmp);
// 	ft_printf("pb\n");
// }
void	pa(t_list **stack_a, t_list **stack_b)
{
    t_list	*tmp;

    if (!(*stack_b))
        return ;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = NULL;
    if (!(*stack_a))
        *stack_a = tmp;
    else
    {
        tmp->next = *stack_a;
        *stack_a = tmp;
    }
    ft_printf("pa\n");
    clear_stack(stack_b);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
    t_list	*tmp;

    if (!(*stack_a))
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = NULL;
    if (!(*stack_b))
        *stack_b = tmp;
    else
    {
        tmp->next = *stack_b;
        *stack_b = tmp;
    }
    ft_printf("pb\n");
    clear_stack(stack_a);
}

