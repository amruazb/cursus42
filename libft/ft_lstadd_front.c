/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:36:23 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 16:21:10 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main()
// {
// 	t_list *name1 = ft_lstnew("Aamir");
// 	t_list *second = ft_lstnew("Zuhail");
// 	t_list *daughter = ft_lstnew("Farah");
	
// 	ft_lstadd_back(&name1,second);
// 	ft_lstadd_front(&name1,daughter);

// 	t_list *current = name1;
	
// 	while (current)
// 	{
// 		printf("%s\n",(char *)current->content);
// 		current = current->next;
// 	}
// 	while (current == NULL)
// 	{
// 		t_list *temp = current;
// 		current = current->next;
// 		free(temp->content);
// 		free(temp);
// 		//printf("%s",(char *)free);
// 	}
// }
