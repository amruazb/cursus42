#include "push_swap.h"

void    rrr(t_list **list_a, t_list **list_b)
{
	(*list_a) = (*list_a)->prev;
	(*list_b) = (*list_b)->prev;
	ft_putstr("rrr\n");
}