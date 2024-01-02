#include "push_swap.h"

static void append_node(t_stack_data **stack, int n)
{
	t_stack_data	*node;
	t_stack_data	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_data));
	if (!node)
		return ;
	node->next = NULL;
	node->num = n;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **a, char **av)
{
	long	n;
	int		i;

	i = 0;
	while(av[1])
	{
		if (error_syntax(av[1]))
			free_errors(0);
		n = ft_atoi(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}

bool stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->nbr > stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_stack_node *find_min(t_stack_node *stack)
{
	long min;
	t_stack_node *min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->nbr < min)
		{
			min = stack->num;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	sort_three(t_stack_data **a)
{
	t_stack_node	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a, false);
	else if ((*a)->next == biggest_node)
		rra(a, false);
	if ((*a)->num > (*a)->next->num)
		sa(a, false);
}

