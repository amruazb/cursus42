#include "push_swap.h"

void    ra(t_list **list_a)
{
	(*list_a) = (*list_a)->next;
	ft_putstr("ra\n");
}

void	rb(t_list **list_b)
{
	(*list_b) = (*list_b)->next;
	ft_putstr("rb\n");
}

void   rr(t_list **list_a, t_list **list_b)
{
	(*list_a) = (*list_a)->next;
	(*list_b) = (*list_b)->next;
	ft_putstr("rr\n");
}

void    rra(t_list **list_a)
{
	(*list_a) = (*list_a)->prev;
	ft_putstr("rra\n");
}

void rrb(t_list **list_b)
{
	(*list_b) = (*list_b)->prev;
	ft_putstr("rrb\n");
}
