#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list *list_a;
	t_list *list_b;
	t_list *copy;

	list_a = NULL;
	list_b = NULL;
	copy = NULL;
	if(ac > 1)
	{
		create_stack(++av, &list_a);
		if (!list_a)
			write(2, "error\n",6);
	}


}


