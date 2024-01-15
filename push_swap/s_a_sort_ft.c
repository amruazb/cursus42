#include "push_swap.h"

void	sort_small_chunk(t_list **list_a, t_list **list_b, int len)
{
	(void)list_b;
	if (len == 2)
		sort_2_num(list_a);
	if (len == 3)
		sort_3_num(list_a);
	if (len == 4)
		sort_4_num(list_a, list_b);
	if (len >= 5 && len <= 34)
		sort_more(list_a, list_b);
}

int find_min(t_list *list)
{
	t_list *tmp;
	int min;
	int size;
	int i;

	i = 0;
	min = list->data;
	size = lst_size(list);
	tmp = list;
	while (i < size)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (min);
}

int find_position(t_list *list, int data)
{
	t_list *tmp;
	int position;
	int i;
	int size;

	size = lst_size(list);
	tmp = list;
	position = 1;
	i = 0;
	while (i < size)
	{
		if (tmp->data == data)
			break ;
		tmp = tmp->next;
		position++;
		i++;
	}
	return (position);
}
int	find_max(t_list *list)
{
	t_list *tmp;
	int max;
	int size;
	int i;

	i = 0;
	max = list->data;
	size = lst_size(list);
	tmp = list;
	while (i < size)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (max);
}