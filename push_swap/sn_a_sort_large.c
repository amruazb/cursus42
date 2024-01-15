#include "push_swap.h"

void	sort_large_chunk(t_list **list_a, t_list **list_b)
{
	int	size;
	int	min;
	int	max;
	int	i;

	i = 0;
	size = lst_size(*list_a);
	min = size / 9;
	min--;
	max = min;
	while (max < size - 11)
	{
		push_the_chunk(list_a, list_b, i - 1, max + 4);
		i = max + 2;
		max += min;
	}
	sort_more(list_a, list_b);
	sort_the_push_chunk(list_a, list_b);
}