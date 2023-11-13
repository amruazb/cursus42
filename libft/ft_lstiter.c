/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:32:55 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/13 16:21:29 by aabashee         ###   ########.fr       */
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

// void print_content(void *content)
// {
//     if (content)
//         printf("%s\n", (char *)content);
// }

// int main()
// {
//     t_list *node1 = ft_lstnew("Aamir");
//     t_list *node2 = ft_lstnew("Zuhail");
//     t_list *node3 = ft_lstnew("Basheer");

//     ft_lstadd_front(&node1, node2);
//     ft_lstadd_front(&node1, node3);

//     ft_lstiter(node1, &print_content);

//     ft_lstclear(&node1, free);

//     return 0;
// }

