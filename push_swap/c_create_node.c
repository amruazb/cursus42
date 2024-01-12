#include "push_swap.h"

int	create_stack(char **input, t_list **list_a)
{
	char **splits;
	int		parsed;
	int		i;
	int		j;
	
	j = 0;
	while (*input)
	{
		splits = ps_split(*input);
		if (!splits)
			return (0);
		i = 0;
		while (splits[i])
		{
			parsed = ps_atoi(splits[i]);
			printf("parsed: %d\n", parsed);
			if((is_zero(parsed, splits[i])) || (is_dup(*list_a, parsed)))
					ft_pexit(*list_a, splits);
			if (j == 0)
				create_node(list_a,parsed);
			add_to_end(list_a, parsed);
			 printf("list_a->data: %d\n", (*list_a)->data);
			i++;
			j = 1;
		}
		free(splits);
		input++;
	}
	if(is_sort(*list_a))
		ft_exit(*list_a);
	return (1);
}

