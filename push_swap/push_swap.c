/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:02:25 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/30 19:08:33 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* *
void	print_list(t_list *a, t_list *tmpa, int len)
{
	while (len)
	{
		printf("%d  ->  %d\n", a->data, tmpa->data);
		a = a->next;
		tmpa = tmpa->next;
		len--;
	}
}
 */

void	ft_exit2(t_list *list_a, t_list *list_b, t_list *init_list)
{
	free_list(list_b);
	free_list(init_list);
	ft_exit(list_a);
}

void	sort_list(t_list **list_b, t_list **init_list)
{
	int	len;

	(void)list_b;
	len = lst_size(*init_list);
	if (len <= 34)
		sort_small_chunk(init_list, list_b, len);
	if (len >= 35 && len <= 134)
		sort_medium_chunk(init_list, list_b);
	if (len >= 135)
		sort_large_chunk(init_list, list_b);
}

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*init_list;

	list_a = NULL;
	list_b = NULL;
	init_list = NULL;
	if (ac >= 2)
	{
		if (av[1] == NULL || !av[1][0] || arg_checker(av) == 0)
			ft_exit3();
		list_a = create_stack(++av);
		if (list_a == NULL)
			ft_exit3();
		ft_init_list(&list_a, &init_list);
		if (is_sorted(list_a))
		{
			free_list(init_list);
			ft_exit(list_a);
		}
		sort_list(&list_b, &init_list);
		ft_exit2(list_a, list_b, init_list);
	}
}

int	arg_checker(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			return (0);
		while (av[i][j] && av[i][j] == ' ')
		{
			j++;
			if (av[i][j] == '\0')
				return (0);
		}
		i++;
	}
	return (1);
}
