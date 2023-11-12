/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:33:46 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 10:45:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}


int main() 
{
	t_list *node1 = ft_lstnew(ft_strdup("Aamir"));
	t_list *node2 = ft_lstnew(ft_strdup("Zuhail"));
	t_list *node3 = ft_lstnew(ft_strdup("Basheer"));
 
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
 
	t_list *current = node1;
	while (current != NULL) 
	{
		printf("%s\n", (char *)current->content);
		t_list *next = current->next;
		ft_lstdelone(current, free);
		current = next;
	}
}