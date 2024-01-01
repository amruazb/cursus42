/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:37:10 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 17:58:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (*lst)
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*lst = new;
}
/* int main()
{
	t_list *name1 = ft_lstnew("Hello");
	t_list *name2 = ft_lstnew("world");
	t_list *name3 = ft_lstnew("my");
	t_list *name4 = ft_lstnew("is");

	ft_lstadd_back(&name1, name3);
	ft_lstadd_back(&name1,name2);
	ft_lstadd_front(&name1, name4);
	t_list *current = name1;
	t_list **temp = &current;
	printf("%d\n", ft_lstsize(name1));
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(temp, del);
} */
