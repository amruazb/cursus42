#include "push_swap.h"

void *create_stack(char **input)
{
    t_list *list_a;
    char **splits;
    int parsed;
	int j;

	j = 0;
	list_a = NULL;
    while (*input)
    {
        splits = ps_split(*input);
        if (!splits)
            return (NULL);
        int i = 0;
        while (splits[i])
        {
            parsed = ps_atoi(splits[i]);
            if (is_zero(parsed, splits[i]) || is_dup(list_a, parsed))
                ft_pexit(list_a, splits);
            add_to_end(&list_a, parsed);
            i++;
        }
        free_splits(splits);
        input++;
    }
	if (is_sorted(list_a))
	    ft_exit(list_a);
	return (list_a);
}
