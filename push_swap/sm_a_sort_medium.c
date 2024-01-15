#include "push_swap.h"

void	sort_medium_chunk(t_list **list_a, t_list **list_b)
{
	int	size;
	int	min;
	int	max;
	int	tmp;
	int	i;

	i = 0;
	size = lst_size(*list_a);
	min = size / 4;
	min--;
	max = min;
	while (max < size)
	{
		push_the_chunk(list_a, list_b, i, max);
		i = max + 1;
		tmp = max;
		max += min;
	}
	if (size - tmp == 4)
		sort_3_num(list_a);
	else
		sort_more(list_a, list_b);
	sort_the_push_chunk(list_a, list_b);
}

void	push_the_chunk(t_list **list_a, t_list **list_b, int min, int max)
{
	int	size;
	int	i = 0;

	while (1)
	{
		if ((*list_a)->data >= min && (*list_a)->data <= max)
		{
			pb(list_a, list_b);
			if ((*list_b)->data <= (min + max) / 2)
				rb(list_b);
			printf("---------------------------------\n");
			print_list(*list_b, *list_b, lst_size(*list_b));
			printf("---------------------------------\n");
		}
		else
		{
		printf("min = %d, max = %d\n", min, max);
		printf("data = %d\n", (*list_a)->data);
			ra(list_a);	
		}
		if (*list_b)
		{
			i++;
			if (i == 35) {
			printf("lst_size = %d\n", lst_size(*list_b));
			print_list(*list_b, *list_b, lst_size(*list_b));
			exit(0);
			}
			size = lst_size(*list_b);
			if (size == max + 1)
				break ;
		}
	}
}

void	sort_the_push_chunk(t_list **list_a, t_list **list_b)
{
	int	size;
	int	max;
	int	pos;
	int	mid;

	while (1)
	{
		max = find_max(*list_b);
		pos = find_position(*list_b, max);
		size = lst_size(*list_b);
		mid = size / 2;
		if ((*list_b)->data == max)
			pa(list_a, list_b);
		else if (pos <= mid)
			rb(list_b);
		else
			rrb(list_b);
		if (size == 2)
			break ;
	}
	if ((*list_b)->data < (*list_b)->next->data)
		sb(list_b);
	pa(list_a, list_b);
	pa(list_a, list_b);
}