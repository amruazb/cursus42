/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_createstack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:18:35 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 14:47:34 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(int number, char *str)
{
	if (number == 0)
	{
		while (*str)
		{
			if ((*str == '-' || *str == '+') && (*(str + 1)
					&& *(str + 1) >= '0' && *(str + 1) <= '9'))
				str++;
			while (*str == '0')
				str++;
			if (*str)
				return (0);
		}
		return (1);
	}
	return (1);
}

int	check_dup(int digit, t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->content == digit)
			return (1);
		temp = temp->next;
	}
	return (0);
}

t_list	*ps_create_stack(char **user_data)
{
	t_list	*stack;
	t_list	*node;
	char	**tmp;
	int		digit;
	int		i;

	stack = NULL;
	while (*(++user_data))
	{
		tmp = ps_split(*user_data);
		if (!tmp)
			free_exit(stack, tmp);
		i = -1;
		while (tmp[++i])
		{
			digit = ps_atoi(tmp[i]);
			if (!(check_digit(digit, tmp[i])) || check_dup(digit, stack))
				free_exit(stack, tmp);
			node = ft_lstnew(digit);
			ft_lstadd_back(&stack, node);
		}
		free_array(tmp);
	}
	return (stack);
}

/* t_list	*ps_create_stack(char **user_data)
{
	t_list	*stack;
	t_list	*node;
	char	**tmp;
	int		digit;
	int		i;

	stack = NULL;
	while (*(++user_data))
	{
		tmp = ps_split(*user_data);
		if (!tmp)
			free_exit(stack, tmp);
		i = -1;
		while (tmp[++i])
		{
			digit = ps_atoi(tmp[i]);
			if (!(check_digit(digit, tmp[i])) || check_dup(digit, stack))
				free_exit(stack, tmp);
			node = ft_lstnew(digit);
			ft_lstadd_back(&stack, node);
		}
		free_array(tmp);
	}
	return (stack);
} */
