#include "push_swap.h"

void	sort_4_num(t_list **list_a, t_list **list_b)
{
	int	min;
	int	pos;

	min = find_min(*list_a);
	pos = find_position(*list_a, min);
	if (pos == 1)
	{
		sort_4_num_com_move(list_a, list_b);
	}
	if (pos == 2)
	{
		sa(list_a);
		if (is_sorted(*list_a))
			return ;
		sort_4_num_com_move(list_a, list_b);
	}
	sort_4_num_cont(list_a, list_b, pos);
}

void	sort_4_num_com_move(t_list **list_a, t_list **list_b)
{
	pb(list_a, list_b);
	sort_3_num(list_a);
	pa(list_a, list_b);
}
void	sort_4_num_cont(t_list **list_a, t_list **list_b, int pos)
{
	if (pos == 3)
	{
		rra(list_a);
		rra(list_a);
		sort_4_num_com_move(list_a, list_b);
	}
	if (pos == 4)
	{
		rra(list_a);
		if (is_sorted(*list_a))
			return ;
		sort_4_num_com_move(list_a, list_b);
	}
}
void	sort_more(t_list **list_a, t_list **list_b)
{
	int	i[5];

	i[0] = 0;
	i[1] = lst_size(*list_a);
	i[3] = find_min(*list_a);
	i[4] = find_position(*list_a, i[3]);
	while (1)
	{
		i[2] = lst_size(*list_a);
		if (i[2] == 4)
			break ;
		i[3] = find_min(*list_a);
		if ((*list_a)->data == i[3])
		{
			pb(list_a, list_b);
			i[0]++;
		}
		else if (i[4] < i[1] / 2)
			ra(list_a);
		else
			rra(list_a);
	}
	sort_4_num(list_a, list_b);
	sort_more_cont(list_a, list_b, i[0]);
}

void	sort_more_cont(t_list **list_a, t_list **list_b, int i)
{
	while (i >= 0)
	{
		pa(list_a, list_b);
		i--;
	}
}