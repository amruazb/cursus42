/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:32:55 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/11 20:12:09 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int ft_toupper(int c);
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
//     t_list *node1 = ft_lstnew(ft_strdup("Aamir"));
//     // t_list *node2 = ft_lstnew(ft_strdup("Zuhail"));
//     // t_list *node3 = ft_lstnew(ft_strdup("Basheer"));
// 	// t_list *node4 = ft_lstnew(ft_strdup("Farah"));
// 	 t_list *node1 = ft_lstnew("Aamir");
//     t_list *node2 = ft_lstnew("Zuhail");
//     t_list *node3 = ft_lstnew("Basheer");

//     ft_lstadd_front(&node1, node2);
//     ft_lstadd_back(&node1, node3);
// 	// ft_lstadd_front(&node1, node4);
// 	printf("size of the list is : %d\n",ft_lstsize(node1));
//     ft_lstiter(node1, &print_content);
// 	ft_lstiter(node1, (void(*)(void *))upper);
// 	printf("\nModified list:\n");
// 	ft_lstiter(node1, &print_content);

//     ft_lstclear(&node1, free);

//     return 0;
// }
