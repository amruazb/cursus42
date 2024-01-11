#include "push_swap.h"

void	sa(t_list **list_a)
{
	int tmp;

	tmp = (*list_a)->data;
	(*list_a)->data = (*list_a)->next->data;
	(*stack_a)->next->data = tmp;
	ft_putstr("sa\n");
}

