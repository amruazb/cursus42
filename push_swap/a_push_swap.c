#include "push_swap.h"
void print_list(t_list *list)
{
    while (list)
    {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}
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
		// if (!list_a)
		// 	write(2, "Error\n",6);
	}
    // print_list(list_a);

    return 0;
}


    // // Create and add nodes to the list
    // add_to_list(&list_a, 10);
    // add_to_list(&list_a, 20);
    // add_to_list(&list_a, 30);

    // Print and check the list
