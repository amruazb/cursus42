/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:26:20 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 09:26:22 by aabashee         ###   ########.fr       */
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
	}
	return (new_node);
}

// int main()
// {
//     // Create a new node with the value "Hello, world!"
//     t_list *node = ft_lstnew("Hello, world!");
//     // Print the value of the node's content
//     printf("%p\n", node->content);
//     // Free the memory allocated for the node
//     free(node);
//     return 0;
// }
