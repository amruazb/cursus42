#include "push_swap.h"



void	sort_2_num(t_list **list_a)
{
	if ((*list_a)->data > (*list_a)->next->data)
		sa(list_a);
}
void	sort_3_num(t_list **list_a)
{
	if ((*list_a)->data > (*list_a)->next->data)
	{
		if ((*list_a)->data < (*list_a)->prev->data && (*list_a)->next->data < (*list_a)->prev->data)
			sa(list_a);
		if ((*list_a)->data > (*list_a)->prev->data && (*list_a)->next->data > (*list_a)->prev->data)
		{
			sa(list_a);
			rra(list_a);
		}
		if ((*list_a)->data > (*list_a)->prev->data && (*list_a)->next->data < (*list_a)->prev->data)
			ra(list_a);
	}
	sort_3_num_cont(list_a);
}
void	sort_3_num_cont(t_list **list_a)
{
	if ((*list_a)->data < (*list_a)->prev->data && (*list_a)->next->data > (*list_a)->prev->data)
	{
		sa(list_a);
		ra(list_a);
	}
	if ((*list_a)->data > (*list_a)->prev->data && (*list_a)->next->data > (*list_a)->prev->data)
		rra(list_a);
}

