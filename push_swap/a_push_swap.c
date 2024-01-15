#include "push_swap.h"
void	print_list(t_list *a, t_list *tmpa, int len)
{
	while (len)
	{
		printf("%d  ->  %d\n", a->data, tmpa->data);
		a = a->next;
		tmpa = tmpa->next;
		len--;
	}
}
void sort_list(t_list **list_b , t_list **init_list)
{
	int len;
	(void)list_b;
	print_list(*init_list, *init_list, lst_size(*init_list));
	len = lst_size(*init_list);
	if (len <= 34)
		sort_small_chunk(init_list, list_b, len);
	if (len >= 35 && len <= 134)
		sort_medium_chunk(init_list, list_b);
	if (len >= 135)
		sort_large_chunk(init_list, list_b);
}

int	main(int ac, char **av)
{
	t_list *list_a;
	t_list *list_b; // b
	t_list *init_list; //tmpa

	list_a = NULL;
	list_b = NULL;
	init_list = NULL;
	if (ac >= 2)
	{
		// if(ac > 1)
		list_a = create_stack(++av);
		ft_init_list(&list_a, &init_list);
		sort_list(&list_b, &init_list);
		//  print_list(list_a, init_list, lst_size(init_list));
	}
		
    return 0;
}
