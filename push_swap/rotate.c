#include "push_swap.h"

static void move_a_to_b(t_stack_data **a, t_stack_data **b)
{
	t_stack_data	*cheapest;

	cheapest = get_cheapest(*a);
	if (cheapest->median && cheapest->target->median)
		rotate_both(a, b, cheapest);
	else if (!(cheapest->median) && !(cheapest->target->median))
		rev_rotate_both(a, b, cheapest);
	prep_for_push(a, b, cheapest);
	prep_for_push(a, cheapest, 'a');
	prep_for_push(b, cheapest->target,'b');
	pb(b, a, false);
}

static void move_b_to_a(t_stack_data **a, t_stack_data **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void min_on_top(t_stack_data **a)
{
	while ((*a)->num != find_min(*a)->num)
	{
		if (find_min(*a)->median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_data **a, t_stack_data **b)
{
	int len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}

void prep_for_push(t_stack_data **stack, t_stack_data *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->median)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}


