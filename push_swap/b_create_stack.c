/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_create_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:38:56 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/15 21:58:54 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*create_stack(char **input)
{
	t_list	*list_a;
	char	**splits;
	int		parsed[2];
	int		i;

	parsed[1] = 0;
	list_a = NULL;
	while (*input)
	{
		splits = ps_split(*input);
		if (!splits)
			return (NULL);
		i = 0;
		while (splits[i])
		{
			parsed[0] = ps_atoi(splits[i]);
			if (is_zero(parsed[0], splits[i]) || is_dup(list_a, parsed[0]))
				ft_pexit(list_a, splits);
			add_to_end(&list_a, parsed[0]);
			i++;
		}
		free_splits(splits);
		input++;
	}
	return (list_a);
}
