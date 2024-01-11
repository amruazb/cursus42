#include "push_swap.h"

t_list *create_node(int data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

void	add_to_list(t_list **list, int data)
{
	t_list	*new_node;

	new_node = create_node(data);
	if (!new_node)
		return ;
	if (*list)
	{
		new_node->next = *list;
		(*list)->prev = new_node;
	}
	*list = new_node;
}

int	create_stack(char **input, t_list **list_a)
{
	char **splits;
	int		parsed;
	int		i;
	
	i = 0;
	while (*input)
	{
		splits = ps_split(*input);
		if (!splits)
			return (0);
		while (splits[i])
		{
			parsed = ps_atoi(splits[i]);
			printf("%d ", parsed);
			add_to_list(list_a, parsed);
			i++;
		}
		free(splits);
		input++;
	}
	return (1);
}

