/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_moves2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 12:19:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Shift up all elements of stack a by 1
 * The first element becomes the last one.
 * stack a.
 * */

void	ra(t_list **stack_a)
{
	(*stack_a) = (*stack_a)->next;
	ft_printf("ra\n");
}

/**
 * Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 * stack b.
 * */

void	rb(t_list **stack_b)
{
	(*stack_b) = (*stack_b)->next;
	ft_printf("rb\n");
}
/**
 * ra and rb at the same time.
 * stack_a 
 * stack_b
 * */

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}

/**
 * Shift down all elements of stack a by 1.
 * The last element becomes the first one
 * Stack_a.
 * */

void	rra(t_list **stack_a)
{
	(*stack_a) = (*stack_a)->prev;
	ft_printf("rra\n");
}

/**
 * Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 * */

void	rrb(t_list **stack_b)
{
	(*stack_b) = (*stack_b)->prev;
	ft_printf("rrb\n");
}
