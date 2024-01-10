/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:18:11 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/10 02:02:00 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*ndata;

	ndata = malloc(sizeof(t_list));
	if (!ndata)
		return (NULL);
	ndata->content = content;
	ndata->next = NULL;
	ndata->prev = NULL;
	return (ndata);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
	new->next = *lst;
	(*lst)->prev = new;
	*lst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!(lst && new))
        return;

    if (!*lst)
    {
        *lst = new;
        return;
    }

    last = *lst;
    while (last->next)
        last = last->next;

    last->next = new;
    new->prev = last;
}


int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*new;

	new = lst;
	i = 0;
	while (new)
	{
		i++;
		new = new->next;
	}
	return (i);
}

/*int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew(12);
	ft_lstadd_front(&lst, new);
	t_list *new1 = ft_lstnew(34);
	ft_lstadd_front(&lst, new1);
	t_list *new2 = ft_lstnew(56);
	ft_lstadd_front(&lst, new2);

	printf("list_size_is:%d\n", ft_lstsize(lst));
	t_list *temp = lst;
	while(temp)
	{
		printf("%d\n",temp->content);
		temp = temp->next;
	}
}*/
