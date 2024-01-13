#include "push_swap.h"

void	create_node(t_list **head, int data)
{
	t_list	*tmp;
	
	tmp = malloc(sizeof(t_list));
	tmp->prev = tmp;
	tmp->data = data;
	tmp->next = tmp;
	(*head) = tmp;

}

void	add_to_begin(t_list **tail, int data)
{
	t_list	*new;
	t_list	*tmp;

	create_node(&new, data);
	if (!(*tail))
	{
		(*tail) = new;
		return ;
	}
	tmp = (*tail)->prev;
	new->next = (*tail);
	(*tail)->prev = new;
	tmp->next = new;
	(*tail) = new;
}
void	add_to_end(t_list **head, int data)
{
	t_list	*new;
	t_list	*tmp;

	create_node(&new, data);
	if (!(*head))
	{
		(*head) = new;
		return ;
	}
	tmp = (*head)->prev;
	tmp->next = new;
	new->prev = tmp;
	new->next = (*head);
	(*head)->prev = new;
}

int	lst_size(t_list *list)
{
	int size;
	int data;

	size = 1;
	data = list->data;
	list = list->next;
	while(data != list->data)
	{
		size++;
		list = list->next;
	}
	return (size);
}

int	is_sort(t_list *list)
{
	t_list *tmp;
	int i;
	int size;

	tmp = list;
	size = lst_size(list);
	i = 0;
	while (i < size)
	{
		if (tmp->data > tmp->next->data)
			break ;
		tmp = tmp->next;
		i++;
	}
	printf("is_sort size\n%d\n", size);
	if (i + 1 < size)
		return (0);
	else
		return (1);
	return (0);
}