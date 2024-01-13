#include "push_swap.h"
void print_list(t_list *list)
{
	t_list *current = list;
	while (current->next)
	{
		printf("%d\n", current->data);
		current = current->next;
		if (current == list)
			break ;
	}
}

int	main(int ac, char **av)
{
	t_list *list_a;
	list_a = NULL;
	if(ac > 1)
		list_a = create_stack(++av);
    print_list(list_a);

    return 0;
}
