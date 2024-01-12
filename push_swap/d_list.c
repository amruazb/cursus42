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
		return ;
	tmp = (*head)->prev;
	tmp->next = new;
	new->prev = tmp;
	new->next = (*head);
	(*head)->prev = new;
}
int	is_sort(t_list *list)
{
	t_list *tmp;

	tmp = list;
	while (tmp->next)
	{
		printf("tmp->data: %d\n", tmp->data);
		printf("tmp->next->data: %d\n", tmp->next->data);
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
		if (tmp == list)
			break ;
	}
	return (1);
}