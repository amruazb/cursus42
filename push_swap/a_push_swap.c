#include "push_swap.h"
void print_list(t_list *list)
{
	t_list *current = list;
	while (current->next != list)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

int	main(int ac, char **av)
{
	t_list *list_a;
	list_a = NULL;
	if(ac > 1)
	{
		create_stack(++av);
		// if (is_sorted(list_a))
        // 	ft_exit(list_a);
		// if (!list_a)
		// 	write(2, "Error\n",6);
	}
    // print_list(list_a);

    return 0;
}
