/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:26:20 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 17:50:01 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->content = content;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}

void	del(void *content)
{
	content = 0;
}

// int main()
// {
// 	t_list *name1 = ft_lstnew("Aamir");
// 	t_list *second = ft_lstnew("Zuhail");
// 	t_list *third = ft_lstnew("Basheer");
// 	ft_lstadd_back(&name1,second);
// 	ft_lstadd_back(&name1,third);
// 	t_list *current = name1;
// 	t_list **temp = &current;
// 	while (current)
// 	{
// 		printf("%s\n",(char *)current->content);
// 		current = current->next;
// 	}
// 	// ft_lstclear(temp, del);
// }