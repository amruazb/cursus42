#include "push_swap.h"

// int	create_stack(char **input, t_list **list_a)
// {
// 	char **splits;
// 	int		parsed;
// 	int		i;
// 	int		j;
	
// 	j = 0;
// 	while (*input)
// 	{
// 		splits = ps_split(*input);
// 		if (!splits)
// 			return (0);
// 		i = 0;
// 		while (splits[i])
// 		{
// 			parsed = ps_atoi(splits[i]);
// 			printf("parsed: %d\n", parsed);
// 			if((is_zero(parsed, splits[i])) || (is_dup(*list_a, parsed)))
// 					ft_pexit(*list_a, splits);
// 			if (j == 0)
// 				create_node(list_a,parsed);
// 			add_to_end(list_a, parsed);
// 			i++;
// 			j = 1;
// 		}
// 	printf("new->data in create_stack: %d\n", (*list_a)->data);
// 		free(splits);
// 		input++;
// 	}
// 	if(is_sort(*list_a))
// 		ft_exit(*list_a);
// 	return (1);
// }

void create_stack(char **input)
{
    t_list *list_a = NULL;
    char **splits;
    int parsed;

    while (*input)
    {
        splits = ps_split(*input);
        if (!splits)
            return;
        int i = 0;
        while (splits[i])
        {
            parsed = ps_atoi(splits[i]);
            printf("parsed: %d\n", parsed);
            if (is_zero(parsed, splits[i]) || is_dup(list_a, parsed))
            {
                free_splits(splits);
                ft_pexit(list_a, splits);
            }
            if (i == 0)
                create_node(&list_a, parsed);
            add_to_end(&list_a, parsed);
            i++;
        }
		while(list_a->next)
        {
			printf("new->data in create_stack: %d\n", list_a->data);
			list_a = list_a->next;
			list_a->prev = list_a->prev->prev;
			list_a->prev->next = NULL;
		}
        free_splits(splits);
        input++;
    }
}