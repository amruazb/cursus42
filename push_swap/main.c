#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack_data *a;
	t_stack_data *b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		retrun (1);
	else if (ac == 2)
		av = split(av[1], ' ');
	init_stack_a(&a, av + 1);
	if (!stack_sorted(a))
	{
		if(stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a,&b);
	}
	free_stack(&a);
	return (0);
}


