/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:27:39 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/19 12:54:19 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	if (lst == NULL)
		return (0);
	new_lst = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (element == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}

// void print_content(void *content)
// {
//     if (content)
// 	{
//         printf("%s\n", (char *)content);
// 	}
// }
// void	upper(char *content)
// {
// 	char *c = (char *)content;
// 	while(*c)
// 	{
// 		if(*c >= 'a' && *c <= 'z')
// 			*c -= 32;
// 		c++;
// 	}	
// }
// int main()
// {
// 	//     t_list *node1 = ft_lstnew(ft_strdup("Aamir"));
//     // t_list *node2 = ft_lstnew(ft_strdup("Zuhail"));
//     // t_list *node3 = ft_lstnew(ft_strdup("Basheer"));
// 	// t_list *node4 = ft_lstnew(ft_strdup("Farah"));
// 	 t_list *node1 = ft_lstnew("Aamir");
//     t_list *node2 = ft_lstnew("Zuhail");
//     t_list *node3 = ft_lstnew("Basheer");

//     ft_lstadd_front(&node1, node2);
//     ft_lstadd_back(&node1, node3);
// 	// ft_lstadd_front(&node1, node4);
// 	printf("Original List:\n");
//     ft_lstiter(node1, &print_content);
// 	ft_lstiter(node1,(void(*)(void *))&upper);
// 	t_list *modifiedlist =	ft_lstmap(node1,
// (void *(*)(void *))&ft_strdup, &free);
// 	printf("\nModified list:\n");
// 	ft_lstiter(node1, &print_content);
//     ft_lstclear(&node1, free);
// 	ft_lstclear(&modifiedlist, free);

//     return 0;
// }