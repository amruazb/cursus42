/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:34:30 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 09:35:59 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		if (del)
			del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// void	del_content(void *content)
// {
// 	free(content);
// }
 
// int	main(void)
// {
// 	t_list	*list = NULL;
// 	list = ft_lstnew("Hello");
// 	ft_lstadd_back(&list, ft_lstnew("World"));
// 	ft_lstadd_back(&list, ft_lstnew("CodePal"));
 
// 	t_list	*current = list;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
 
// 	ft_lstclear(&list, del_content);
 
// 	current = list;
// 	t_list *next;
// 	while (current)
// 	{
// 		next = current->next;
// 		free(current);
// 		current = next;
// 	}
 
// 	return 0;
// }